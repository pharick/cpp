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

    int s, k;
    std::cin >> s >> k;
    int tmp = arr[s - 1];
    arr.erase(arr.begin() + (s - 1));
    arr.insert(arr.begin() + (k - 1), tmp);


    for (it = arr.begin(); it < arr.end(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
    return 0;
}