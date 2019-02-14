#include <iostream>
#include <iomanip>

std::ostream &operator + (std::ostream& out, int k) {
  out << std::setw(k) << std::setfill('0') << std::internal;
  return out;
}

int main() {
  int n, k;
  std::cin >> n >> k;
  if (n < 0) k++;
  std::cout + k << n << " " << n << std::endl;
  return 0;
}