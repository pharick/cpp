#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

void write_item(int item) {
    std::cout << item << " ";
}

int modify(int item) {
    if (item >= 0) return item * 2;
    return floor(item / 2.0);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    std::generate(data.begin(), data.end(), read_item);
    
    std::transform(data.begin(), data.end(), data.begin(), modify);

    std::for_each(data.begin(), data.end(), write_item);
    std::cout << std::endl;
    return 0;
}