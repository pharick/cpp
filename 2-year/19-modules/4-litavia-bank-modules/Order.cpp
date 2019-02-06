//
// Created by Артем Форкунов on 2019-02-06.
//

#include "Order.h"

#include <iostream>
#include <cstring>

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
