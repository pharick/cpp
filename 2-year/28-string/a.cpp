#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    int count = 0;

    for (char s : str) {
        if (s >= 48 && s <= 57) count++;
    }
    std::cout << count << std::endl;
    return 0;
}