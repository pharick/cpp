//
// Created by Артем Форкунов on 2019-02-06.
//

#ifndef LITAVIA_BANK_BANK_H
#define LITAVIA_BANK_BANK_H

#include "Account.h"
#include "Order.h"

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


#endif //LITAVIA_BANK_BANK_H
