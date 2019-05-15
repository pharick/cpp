#include <iostream>
#include <vector>
#include <algorithm>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    std::generate(data.begin(), data.end(), read_item);

    std::sort(data.begin(), data.end());

    double median;
    if (n % 2) {
        median = data[(n + 1) / 2 - 1];
    } else {
        int m1 = data[n / 2 - 1];
        int m2 = data[n / 2];
        median = (m1 + m2) / 2.0;
    }

    std::cout << median << std::endl;
    return 0;
}