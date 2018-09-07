#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double lineLength(int x1, int y1, int x2, int y2) {
  int a = abs(x2 - x1);
  int b = abs(y2 - y1);
  return sqrt(a*a + b*b);
}

int main() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  cout << fixed << setprecision(6)
       << lineLength(x1, y1, x2, y2) +
          lineLength(x2, y2, x3, y3) +
          lineLength(x3, y3, x1, y1)
       << endl;
  return 0;
}
