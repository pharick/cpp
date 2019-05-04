#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int n, m;

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

void write_item(int item) {
    if (item) std::cout << item << std::endl;
}

int get_number() {
    return n--;
}

bool check_simple(int item) {
    std::vector<int> divs(item - 2, 0);
    m = 2;
    std::generate(divs.begin(), divs.end(), []() {
        return m++;
    });

    return std::any_of(divs.begin(), divs.end(), [item](int divr) {
        return item % divr == 0;
    });
}

int main() {
    std::cin >> n;

    std::vector<int> data(n - 1, 0);
    std::generate(data.begin(), data.end(), get_number);

    std::vector<int>::iterator end = std::remove_if(data.begin(), data.end(), check_simple);

    std::reverse(data.begin(), end);
    std::for_each(data.begin(), end, write_item);
    return 0;
}