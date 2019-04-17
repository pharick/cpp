#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(100, 0);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}