#include <iostream>
#include <string>
#include <set>

std::string normalize_phone(std::string phone) {
    std::string normal;
    for (char c : phone) {
        if (c != '(' && c != ')' && c != '-') {
            normal += c;
        }
    }

    if (normal.length() == 7) {
        normal = "8495" + normal;
    } else if (normal.length() == 12) {
        normal.erase(0, 1);
        normal[0] = '8';
    }

    return normal;
}

int main() {
    std::string new_phone;
    std::getline(std::cin, new_phone);
    new_phone = normalize_phone(new_phone);

    std::string phone;
    for (int i = 0; i < 3; i++) {
        std::getline(std::cin, phone);
        std::cout << (new_phone == normalize_phone(phone) ? "YES" : "NO") << std::endl;
    }
}