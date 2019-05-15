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

    std::vector<int>::iterator min = std::min_element(data.begin(), data.end());
    std::vector<int>::iterator max = std::max_element(data.begin(), data.end());
    
    if (min - data.begin() < max - data.begin())
        std::reverse(min, max + 1);
    else
        std::reverse(max, min + 1);

    std::for_each(data.begin(), data.end(), write_item);
    std::cout << std::endl;
    return 0;
}