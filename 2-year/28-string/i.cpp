#include <iostream>
#include <string>

std::string next_item(std::string current_item) {
    std::string next_item = "";
    
    int i = 0;
    int count = 0;
    char digit = current_item[i];
    while (i < current_item.length()) {        
        if (current_item[i] == digit) {
            count++;
        } else {
            next_item += std::to_string(count);
            next_item += digit;

            count = 0;
            digit = current_item[i];
            i--;
        }
        i++;
    }

    next_item += std::to_string(count);
    next_item += digit;

    return next_item;
}

int main() {
    std::string current;
    int n;
    std::cin >> current >> n;
    
    for (int i = 0; i < n - 1; i++) {
        current = next_item(current);
    }

    std::cout << current << std::endl;
    return 0;
}