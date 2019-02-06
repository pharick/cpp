#include <iostream>
#include <cstring>
#include <cstdlib>

class Account {
    char name[101];
    char address[101];
    int balance;

public:
    Account(const char *name = "User", const char *address = "Place", int balance = 0);
    int get_balance();
    bool update_balance(int);
    const char *get_name();
    const char *get_address();
    void show();
};

Account::Account(const char *name, const char *address, int balance): balance(balance) {
    stpcpy(this->name, name);
    stpcpy(this->address, address);
}

int Account::get_balance() {
    return this->balance;
}

bool Account::update_balance(int change) {
    if (change < 0 && this->balance + change < 0) return false;
    this->balance += change;
    return true;
}

const char* Account::get_name() {
    return this->name;
}

const char* Account::get_address() {
    return this->address;
}

void Account::show() {
    std::cout << this->name << "; " << this->address << ": " << this->balance << std::endl;
}

class Order {
    char name[101];
    unsigned fine;

public:
    Order(const char *name = "User", int fine = 100);
    const char *get_name();
    int get_fine();
    void show();
};

Order::Order(const char *name, int fine): fine(fine) {
    strcpy(this->name, name);
}

const char* Order::get_name() {
    return this->name;
}

int Order::get_fine() {
    return this->fine;
}

void Order::show() {
    std::cout << this->name << ": " << this->fine << std::endl;
}

class Bank {
    Account database[1000];
    unsigned count;

public:
    Bank();
    int add_user(char *name, char *address, int balance);
    Account get_user_data(char *name);
    bool process_order(Order o);
    void show_all();
    void manager_menu();
};

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

int main() {
    Bank bank;
    bank.manager_menu();
    return 0;
}