#include <iostream>
#include <cstring>

class Array {
  int len;
  int* data;

public:
  Array(int len, int val = 0);
  Array(const Array&);
  ~Array();

  int length();
  void reverse();

  Array operator = (const Array&);
  Array operator + (const int&);

  friend Array operator + (int n, Array arr);

  friend std::ostream& operator << (std::ostream&, const Array&);
  friend std::istream& operator >> (std::istream&, Array&);
};

Array::Array(int len, int val) {
  this->len = len;
  this->data = new int[len];
}

Array::Array(const Array &tmp) {
  this->len = tmp.len;
  this->data = new int[tmp.len];
  for (int i = 0; i < tmp.len; i++) {
    this->data[i] = tmp.data[i];
  }
}

Array::~Array() {
  delete [] this->data;
}

int Array::length() {
  return this->len;
}

void Array::reverse() {
  int *reversed = new int[this->len];
  for (int i = 0; i < this->len; i++) {
    reversed[i] = this->data[this->len - i - 1];
  }
  delete [] this->data;
  this->data = reversed;
}

std::ostream& operator << (std::ostream &out, const Array &arr) {
  for (int i = 0; i < arr.len; i++) {
    out << arr.data[i];
    if (i != arr.len - 1) out << " ";
  }
  return out;
}

std::istream& operator >> (std::istream &in, Array &arr) {
  for (int i = 0; i < arr.len; i++) {
    in >> arr.data[i];
  }
  return in;
}

Array Array::operator = (const Array &b) {
  this->len = b.len;
  delete [] this->data;
  this->data = new int[b.len];
  for (int i = 0; i < this->len; i++) {
    this->data[i] = b.data[i];
  }
  return b;
}

Array Array::operator + (const int &n) {
  Array new_arr(this->len + 1);

  for (int i = 0; i < this->len; i++) {
    new_arr.data[i] = this->data[i];
  }
  new_arr.data[this->len] = n;

  return new_arr;
}

Array operator + (int n, Array arr) {
  Array new_arr(arr.len + 1);

  new_arr.data[0] = n;
  for (int i = 1; i < arr.len + 1; i++) {
    new_arr.data[i] = arr.data[i - 1];
  }

  return new_arr;
}

int main() {
  int len;
  std::cin >> len;
  Array arr(len);
  std::cin >> arr;

  int n;
  std::cin >> n;
  char command[6] = {};
  int k;
  for (int i = 0; i < n; i++) {
    std::cin >> command >> k;
    if (!strcmp(command, "LEFT")) {
      arr = k + arr;
    } else if (!strcmp(command, "RIGHT")) {
      arr = arr + k;
    }
  }

  std::cout << arr.length() << std::endl << arr << std::endl;
}