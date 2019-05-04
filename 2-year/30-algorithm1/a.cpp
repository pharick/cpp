#include <iostream>
#include <vector>
#include <algorithm>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

void write_item(int item) {
    std::cout << item << " ";
}

int main() {
    std::vector<int> data(15, 0);
    std::generate(data.begin(), data.end(), read_item);
    std::reverse(data.begin() + 2, data.end() - 6);
    std::for_each(data.begin(), data.end(), write_item);
    return 0;
}