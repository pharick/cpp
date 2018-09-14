#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  int max = n % 10;
  n /= 10;

  while (n) {
    int dig = n % 10;

    if (dig > max) {
      max = dig;
    }

    n /= 10;
  }

  cout << max << endl;
  return 0;
}