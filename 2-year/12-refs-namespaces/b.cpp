#include <iostream>
#include <cmath>

void sort_three_numbers(int &a, int &b, int &c) {
  int tmp;
  if (b > c) {
    tmp = b;
    b = c;
    c = tmp;
  }
  if (a > b) {
    tmp = a;
    a = b;
    b = tmp;
  }
  if (b > c) {
    tmp = b;
    b = c;
    c = tmp;
  }
}

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  sort_three_numbers(a, b, c);
  std::cout << a << " " << b << " " << c << std::endl;
  return 0;
}