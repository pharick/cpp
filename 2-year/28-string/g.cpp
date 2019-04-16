#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    
    std::cout << line.substr(0, (line.length() - 1) % 3 + 1);

    for (int i = (line.length() - 1) % 3 + 1; i < line.length(); i += 3) {
        std::cout << ',' << line.substr(i, 3);
    }

    std::cout << std::endl;
    return 0;
}