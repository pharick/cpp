#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double perimetr(int a, int b, int h) {
  double c = sqrt(pow((b - a) / 2.0, 2) + pow(h, 2));
  return a + b + c*2;
}

int main() {
  int a1, b1, h1, a2, b2, h2;
  cin >> a1 >> b1 >> h1 >> a2 >> b2 >> h2;
  cout << fixed << setprecision(6)
       << perimetr(a1, b1, h1) + perimetr(a2, b2, h2)
       << endl;
  return 0;
}
