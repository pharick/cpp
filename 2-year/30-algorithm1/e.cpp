#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int read_item() {
    int item;
    std::cin >> item;
    return item;
}

void write_item(int item) {
    std::cout << item << " ";
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> data1(n, 0);
    std::generate(data1.begin(), data1.end(), read_item);

    int m;
    std::cin >> m;
    std::vector<int> data2(m, 0);
    std::generate(data2.begin(), data2.end(), read_item);

    int k;
    std::cin >> k;
    std::vector<int> data3(k, 0);
    std::generate(data3.begin(), data3.end(), read_item);

    std::vector<int>::iterator pend = std::remove_if(data1.begin(), data1.end(), [data2, data3](int item) {
        return std::find(data2.begin(), data2.end(), item) != data2.end() ||
               std::find(data3.begin(), data3.end(), item) != data3.end();
    });

    std::sort(data1.begin(), pend);
    std::for_each(data1.begin(), pend, write_item);
    std::cout << std::endl;
    return 0;
}