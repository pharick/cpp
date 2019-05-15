#include <iostream>
#include <vector>
#include <algorithm>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> data(n, 0);
    std::generate(data.begin(), data.end(), read_item);

    std::vector<int> to_search(k, 0);
    std::generate(to_search.begin(), to_search.end(), read_item);

    std::for_each(to_search.begin(), to_search.end(), [data](int n) {
        std::cout << (std::binary_search(data.begin(), data.end(), n) ? "YES" : "NO") << std::endl;
    });

    return 0;
}