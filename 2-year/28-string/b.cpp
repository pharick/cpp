#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 111) {
            str.erase(i, 1);
            break;
        }
    }

    std::cout << str << std::endl;
    return 0;
}