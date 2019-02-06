//
// Created by Артем Форкунов on 2019-02-06.
//

#ifndef LITAVIA_BANK_ACCOUNT_H
#define LITAVIA_BANK_ACCOUNT_H


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


#endif //LITAVIA_BANK_ACCOUNT_H
