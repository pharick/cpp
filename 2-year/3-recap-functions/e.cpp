#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double triangle_area (double a, double b, double c) {
  double p = 0.5 * (a + b + c);
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

double triangle_area (double x1, double y1, double x2, double y2, double x3, double y3) {
  double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
  double c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

  return triangle_area(a, b, c);
}

int main() {
  short p;
  double a, b, c, x1, y1, x2, y2, x3, y3;
  cin >> p;

  if (p == 3) {
    cin >> a >> b >> c;
    cout << fixed << setprecision(4)
         << triangle_area(a, b, c);
  } else if (p == 6) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(4)
         << triangle_area(x1, y1, x2, y2, x3, y3);
  }

  cout << endl;
  return 0;
}