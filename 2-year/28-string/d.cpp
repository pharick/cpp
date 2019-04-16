#include <iostream>
#include <string>

int main() {
    std::string str, sub;
    std::getline(std::cin, str);
    std::getline(std::cin, sub);

    int i;
    while (i < str.length()) {
        i = str.find(sub, i);
        
        if (i == -1) break;
        
        std::cout << i << " ";
        i++;
    }

    std::cout << std::endl;
    return 0;
}