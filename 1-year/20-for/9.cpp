#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;

  double sum = sqrt(n);
  for (short i = n - 1; i >= 1; i--) {
    sum = sqrt(i + sum);
  }

  cout << fixed << setprecision(6)
       << sum << endl;
  return 0;
}
