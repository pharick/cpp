#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  double d = b*b - 4*a*c;

  if (d == 0) {
    cout << fixed << setprecision(6)
         << -b/(2*a) << endl;
  } else if (d > 0) {
    double x1 = (-b - sqrt(d)) / (2*a);
    double x2 = (-b + sqrt(d)) / (2*a);
    if (x1 > x2) {
      double tmp = x1;
      x1 = x2;
      x2 = tmp;
    }
    cout << fixed << setprecision(6)
         << x1 << " " << x2 << endl;
  }

  return 0;
}
