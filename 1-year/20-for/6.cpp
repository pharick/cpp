#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  short n;
  cin >> n;

  double d = 10;
  for (short i = 2; i <= n; i++) {
    d += d / 100 * 10;
  }

  cout << fixed << setprecision(6)
       << d << endl;
  return 0;
}
