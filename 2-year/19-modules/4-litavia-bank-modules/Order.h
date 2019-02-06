//
// Created by Артем Форкунов on 2019-02-06.
//

#ifndef LITAVIA_BANK_ORDER_H
#define LITAVIA_BANK_ORDER_H


class Order {
    char name[101];
    unsigned fine;

public:
    Order(const char *name = "User", int fine = 100);
    const char *get_name();
    int get_fine();
    void show();
};


#endif //LITAVIA_BANK_ORDER_H
