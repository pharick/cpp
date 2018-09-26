#include <iostream>
#include <cmath>
using namespace std;

bool is_point_in_circle(double x, double y, double xc, double yc, double r) {
  return sqrt(pow(x - xc, 2) + pow(y - yc, 2)) < r;
}

int main() {
  double x, y, xc, yc, r;
  cin >> x >> y >> xc >> yc >> r;

  cout << (is_point_in_circle(x, y, xc, yc, r) ? "YES" : "NO") << endl;
  return 0;
}