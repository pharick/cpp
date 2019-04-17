#include <iostream>
#include <vector>

bool is_in_arr(std::vector<int> &arr, int x) {
    std::vector<int>::iterator it;
    for (it = arr.begin(); it < arr.end(); it++) {
        if (*it == x) return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n, 0);


    std::vector<int>::iterator it;
    for (it = arr.begin(); it < arr.end(); it++) {
        std::cin >> *it;
    }

    int count = 0;
    std::vector<int> set;
    for (it = arr.begin(); it < arr.end(); it++) {
        if (!is_in_arr(set, *it)) set.push_back(*it);
    }

    std::cout << set.size() << std::endl;
    return 0;
}