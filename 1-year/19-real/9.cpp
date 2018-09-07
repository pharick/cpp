#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double s, b, c;
  cin >> s >> b >> c;

  cout << fixed << setprecision(6)
       << s / 100 * b * c * 2 << endl;
  return 0;
}
