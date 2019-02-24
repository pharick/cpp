#include <iostream>

class Array {
    int n;
    int *data;
public:
    Array(int n = 10);
    ~Array();
    int get_length() { return this->n; }
    int& operator [] (int i);
    Array operator () (int l, int r);
};

Array::Array(int n) {
    this->n = n;
    this->data = new int[n];
}

Array::~Array() {
    delete [] this->data;
}

int& Array::operator [] (int i) {
    i = i % this->n;
    if (i < 0) i = this->n + i;
    return this->data[i];
}

Array Array::operator () (int l, int r) {
    Array slice(r - l - 1);
    for (int i = 0, j = l + 1; j < r; i++, j++) {
        slice[i] = this->data[j];
    }
    return slice;
}

int main() {
    int n;
    std::cin >> n;

    Array arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int l, r;
    std::cin >> l >> r;
    Array slice = arr(l, r);

    std::cout << slice.get_length() << std::endl;
    for (int i = 0; i < slice.get_length(); i++) {
        std::cout << slice[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}