#include <iostream>
#include <string>
#include <set>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::set<char> digits;

    for (char s : str) {
        if (s >= 48 && s <= 57) digits.insert(s);
    }

    if (digits.size())
        for (char s : digits) std::cout << s;
    else std::cout << "NO";

    std::cout << std::endl;
    return 0;
}