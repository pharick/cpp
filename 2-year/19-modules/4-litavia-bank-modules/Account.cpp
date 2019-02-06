//
// Created by Артем Форкунов on 2019-02-06.
//

#include "Account.h"

#include <iostream>
#include <cstring>

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