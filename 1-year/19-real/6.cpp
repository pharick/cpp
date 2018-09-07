#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  cout << fixed << setprecision(6)
       << (a + b) / 2 << " "
       << sqrt(a*b)
       << endl;
  return 0;
}
