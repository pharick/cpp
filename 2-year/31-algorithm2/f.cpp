#include <iostream>
#include <vector>
#include <algorithm>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

int main() {
    int n, a;
    std::cin >> n >> a;

    std::vector<int> data(n, 0);
    std::generate(data.begin(), data.end(), read_item);

    std::vector<int>::iterator right_it = std::find_if(data.begin(), data.end(), [a](int n) {
        return n > a;
    });
    int right = *right_it;
    int right_i = (right_it - data.begin()) + 1;

    std::reverse(data.begin(), data.end());

    std::vector<int>::iterator left_it = std::find_if(data.begin(), data.end(), [a](int n) {
        return n < a;
    });

    int left = *left_it;
    int left_i = n - (left_it - data.begin());

    std::cout << left_i << " " << left << std::endl
              << right_i << " " << right << std::endl;
    return 0;
}