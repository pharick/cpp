#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;

  double den = sin(1),
         sum = 1.0 / den;
  for (short i = 2; i <= n; i++) {
    den += sin(i);
    sum += 1.0 / den;
  }

  cout << fixed << setprecision(6)
       << sum << endl;
  return 0;
}
