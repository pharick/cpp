#include <iostream>
#include <cstring>

class Dictionary {
    int len;
    int* data;
    char** keys;
public:
    Dictionary();
    ~Dictionary();
    int& operator [] (const char* key);
};

Dictionary::Dictionary() {
    this->len = 0;
    this->data = new int [0];
    this->keys = new char* [0];
}

Dictionary::~Dictionary() {
    delete [] this->data;
    delete [] this->keys;
}

int& Dictionary::operator [] (const char *key) {
    for (int i = 0; i < this->len; i++) {
        if (!strcmp(this->keys[i], key)) return this->data[i];
    }

    char** keys_new = new char* [this->len + 1];
    int* data_new = new int [this->len + 1];

    for (int i = 0; i < this->len; i++) {
        keys_new[i] = new char [21];
        strcpy(keys_new[i], this->keys[i]);
        data_new[i] = this->data[i];
    }
    keys_new[this->len] = new char [21];
    strcpy(keys_new[this->len], key);
    data_new[this->len] = 0;

    delete [] this->keys;
    this->keys = keys_new;
    delete [] this->data;
    this->data = data_new;

    return this->data[this->len++];
}

int main() {
    Dictionary dict;

    int n;
    std::cin >> n;

    char command[4] = {};
    char key[21] = {};
    int value;
    for (int i = 0; i < n; i++) {
        std::cin >> command;
        if (!strcmp(command, "SET")) {
            std::cin >> key;
            std::cin >> value;
            dict[key] = value;
        } else if (!strcmp(command, "INC")) {
            std::cin >> key;
            std::cin >> value;
            dict[key] += value;
        } else if (!strcmp(command, "GET")) {
            std::cin >> key;
            std::cout << dict[key] << std::endl;
        }
    }
}