#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);

    int m;
    std::cin >> m;

    for (int i = 0; i < line.length(); i += m) {
        std::cout << line.substr(i, m) << std::endl;
    }

    return 0;
}