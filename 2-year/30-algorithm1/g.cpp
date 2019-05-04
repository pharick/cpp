#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int n;
int divr = 2;

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

void write_item(int item) {
    if (item) std::cout << item << " ";
}

int get_multiplier() {
    if (n <= 1) return 0;
    while (n % divr) divr++;
    n /= divr;
    return divr;
}

int main() {
    std::cin >> n;

    std::vector<int> data(sqrt(n), 0);
    std::generate(data.begin(), data.end(), get_multiplier);

    std::vector<int>::iterator end = std::unique(data.begin(), data.end());

    std::for_each(data.begin(), end, write_item);
    std::cout << std::endl;
    return 0;
}