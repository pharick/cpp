#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n, 0);


    std::vector<int>::iterator it;
    for (it = arr.begin(); it < arr.end(); it++) {
        std::cin >> *it;
    }

    int k;
    std::cin >> k;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == k && arr[i + 1] == k) {
            std::cout << i + 1 << " " << i + 2 << std::endl;
            return 0;
        }
    }

    std::cout << 0 << std::endl;
    return 0;
}