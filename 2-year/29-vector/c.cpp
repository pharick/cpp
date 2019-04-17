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

    int x, y;
    std::cin >> x >> y;
    int tmp = arr[x - 1];
    arr[x - 1] = arr[y - 1];
    arr[y - 1] = tmp;

    for (it = arr.begin(); it < arr.end(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}