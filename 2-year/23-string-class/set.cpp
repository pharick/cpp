#include <iostream>
#include <cstring>

class Array {
  int len;
  int data[100000];
public:
  Array(int len = 0): len(len) {}

  int& operator [] (int i);
  int length() { return len; }
  void append(int n);
};

int& Array::operator [] (int i) {
  return data[i];
}

void Array::append(int n) {
  data[len] = n;
  len++;
}

class Set {
  Array data;
public:
  int length() { return data.length(); }
  bool isPresent(int n);
  void add(int n);
};

bool Set::isPresent(int n) {
  for (int i = 0; i < this->length(); i++) {
    if (data[i] == n) return true;
  }
  return false;
}

void Set::add(int n) {
  if (!this->isPresent(n)) data.append(n);
}

int main() {
  Set set;
  
  int n;
  std::cin >> n;

  char command[8] = {};
  int a;
  for (int i = 0; i < n; i++) {
    std::cin >> command;

    if (!strcmp(command, "ADD")) {
      std::cin >> a;
      set.add(a);
    } else if (!strcmp(command, "COUNT")) {
      std::cout << set.length() << std::endl;
    } else if (!strcmp(command, "PRESENT")) {
      std::cin >> a;
      std::cout << (set.isPresent(a) ? "YES" : "NO") << std::endl;
    }
  }

  return 0;
}