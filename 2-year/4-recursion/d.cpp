#include <iostream>
using namespace std;

int digit_root(int n) {
  if (!(n / 10)) return n;
  
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }

  return digit_root(sum);
}

int main() {
  int n;
  cin >> n;

  cout << digit_root(n) << endl;
  return 0;
}