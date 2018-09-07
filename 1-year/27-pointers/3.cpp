#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int swap_numbers(double *a, double *b) {
  double tmp = *a;
  *a = *b;
  *b = tmp;
}

int quadratic_solve(double a, double b, double c, double *x1, double *x2) {
  double d = b*b - 4*a*c;

  if (d < 0) return 0;

  *x1 = (-b - sqrt(d)) / (2.0*a);
  *x2 = (-b + sqrt(d)) / (2.0*a);

  if (*x1 > *x2) {
    swap_numbers(x1, x2);
  }

  return d > 0 ? 2 : 1;
}

int main() {
  double a, b, c, x1, x2;
  cin >> a >> b >> c;

  cout << fixed << setprecision(6);
  short rootNumber = quadratic_solve(a, b, c, &x1, &x2);
  if (rootNumber == 2) {
    cout << x1 << " " << x2 << endl;
  } else if (rootNumber == 1) {
    cout << x1 << endl;
  }
  return 0;
}
