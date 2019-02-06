//
// Created by Артем Форкунов on 2019-02-06.
//

#include "Bank.h"

#include <cstring>
#include <iostream>
#include <cstdlib>

int tokenize(char str[], char tokens[10][100]);

Bank::Bank() {
    this->count = 0;
}

int Bank::add_user(char *name, char *address, int balance) {
    if (this->count == 1000) return -1;
    Account user(name, address, balance);
    this->database[this->count++] = user;
    return this->count - 1;
}

Account Bank::get_user_data(char *name) {
    for (short i = 0; i < this->count; i++) {
        if (!strcmp(this->database[i].get_name(), name)) return this->database[i];
    }
    Account blank;
    return blank;
}

bool Bank::process_order(Order o) {
    for (short i = 0; i < this->count; i++) {
        if (!strcmp(this->database[i].get_name(), o.get_name())) {
            return this->database[i].update_balance(-o.get_fine());
        }
    }
    return false;
}

void Bank::show_all() {
    for (short i = 0; i < this->count; i++) {
        this->database[i].show();
    }
}

void Bank::manager_menu() {
    char command[1001] = {};
    char tokenized_command[10][100] = {};
    while (true) {
        std::cin.getline(command, 1000);
        tokenize(command, tokenized_command);

        if (!strcmp(tokenized_command[0], "EXIT")) {
            std::cout << "GOOD BYE" << std::endl;
            break;
        } else if (!strcmp(tokenized_command[0], "ADD USER ")) {
            std::cout << (this->add_user(tokenized_command[1], tokenized_command[2], atoi(tokenized_command[3])) == -1 ? "ERROR" : "OK") << std::endl;
        } else if (!strcmp(tokenized_command[0], "SHOW ALL")) {
            this->show_all();
        } else if (!strcmp(tokenized_command[0], "SHOW ACCOUNT ")) {
            Account user = this->get_user_data(tokenized_command[1]);
            if (!strcmp(user.get_name(), "User")) std::cout << "ERR" << std::endl;
            else user.show();
        } else if (!strcmp(tokenized_command[0], "CREATE ORDER ")) {
            Order order(tokenized_command[1], atoi(tokenized_command[2]));
            std::cout << (this->process_order(order) ? "OK" : "ERROR") << std::endl;
        }
    }
}

int tokenize(char str[], char tokens[10][100]) {
    char *token = {};
    int i = 0;
    do {
        token = strtok(token ? nullptr : str, "\"");
        if (token && strcmp(token, " ")) {
            strncpy(tokens[i], token, 100);
            i++;
        }
    } while (token);
    return i;
}