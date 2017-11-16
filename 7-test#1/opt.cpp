#include <iostream>
using namespace std;

int main() {
  short int n;
  cin >> n;

  short int r1, r2;

  r1 = n / 144;
  n -= r1 * 144;

  r2 = n / 12;
  n  -= r2 * 12;
  if (n >= 10) {
    r2 += 1;
    n = 0;
  }

  cout << r1 << ' ' << r2 << ' ' << n << endl;

  return 0;
}
