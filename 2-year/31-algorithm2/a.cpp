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
    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    std::generate(data.begin(), data.end(), read_item);

    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> its = std::minmax_element(data.begin(), data.end());
    std::swap(*its.first, *its.second);

    std::for_each(data.begin(), data.end(), write_item);
    std::cout << std::endl;
    return 0;
}