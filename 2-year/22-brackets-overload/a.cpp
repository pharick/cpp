#include <iostream>

class Array {
    int n;
    int *data;
public:
    Array(int n = 10);
    ~Array();
    int& operator [] (int i);
};

Array::Array(int n) {
  this->n = n;
  this->data = new int[n];
}

Array::~Array() {
  delete [] this->data;
}

int& Array::operator [] (int i) {
  return this->data[i];
}

int main() {
  int n;
  std::cin >> n;

  Array arr(n);
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cin >> n;
  int index;
  for (int i = 0; i < n; i++) {
    std::cin >> index;
    std::cout << arr[index] << " ";
  }

  std::cout << std::endl;
  return 0;
}