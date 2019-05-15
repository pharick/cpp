#include <iostream>
#include <vector>
#include <algorithm>

void write_item(int item) {
    std::cout << item << " ";
}

int main() {
    std::vector<int> data;

    int a;
    while (true) {
        std::cin >> a;
        if (a == 0) break;
        data.push_back(a);
    }

    std::vector<int> data_bak(data);

    int min1 = *std::min_element(data.begin(), data.end());
    std::vector<int>::iterator end = std::remove(data.begin(), data.end(), min1);

    int min2 = *std::min_element(data.begin(), end);

    std::for_each(data_bak.begin(), data_bak.end(), write_item);
    std::cout << std::endl;
    std::cout << min1 << " " << min2 << std::endl;
    return 0;
}