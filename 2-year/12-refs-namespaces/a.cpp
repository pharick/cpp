#include <iostream>
#include <cmath>

void get_odd_even_divisors(int n, int &odd, int &even) {
  odd = 0;
  even = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      if (i % 2 == 0) even++;
      else odd++;
    }
  }
}

int main() {
  int n, odd, even;
  std::cin >> n;
  get_odd_even_divisors(n, odd, even);
  std::cout << odd << " " << even << std::endl;
  return 0;
}