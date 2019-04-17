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

    int x, k;
    std::cin >> x >> k;
    arr.insert(arr.begin() + x, k);

    for (it = arr.begin(); it < arr.end(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}