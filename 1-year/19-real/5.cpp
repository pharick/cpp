#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  cout << (abs(a + b - c) < 0.00000001 ? "YES" : "NO") << endl;
  return 0;
}
