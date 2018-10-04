#include <iostream>
using namespace std;

int digit_sum(int n) {
  short digit = n % 10;
  if (!n % 10) return 0;
  return digit + digit_sum(n / 10);
}

int main() {
  int n;
  cin >> n;

  cout << digit_sum(n) << endl;
  return 0;
}