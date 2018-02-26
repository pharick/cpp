#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  short n;
  cin >> n;

  double sum = 1000;
  for (short i = 1; i <= n; i++) {
    sum += sum / 100 * 2;
  }

  cout << fixed << setprecision(6)
       << sum << endl;
  return 0;
}
