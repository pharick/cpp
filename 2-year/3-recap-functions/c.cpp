#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void triangle_stats(double a, double b, double c, double *area, double *perimeter) {
  double p = 0.5 * (a + b + c);
  *area = sqrt(p * (p - a) * (p - b) * (p - c));
  *perimeter = a + b + c;
}

int main() {
  double a, b, c, area, perimeter;
  cin >> a >> b >> c;

  triangle_stats(a, b, c, &area, &perimeter);

  cout << fixed << setprecision(6)
       << area << endl << perimeter << endl;
  return 0;
}