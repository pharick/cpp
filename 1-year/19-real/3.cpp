#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double x;
  cin >> x;
  cout << fixed << setprecision(4)
       << 3 * sqrt(x) << endl;
  return 0;
}
