#include <iostream>
using namespace std;

int digit_number(int n) {
  if (!n % 10) return 0;
  return 1 + digit_number(n / 10);
}

int main() {
  int n;
  cin >> n;

  cout << digit_number(n) << endl;
  return 0;
}