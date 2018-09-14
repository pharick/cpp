#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  bool result = (x1 != x2 || y1 != y2) && 
                ((x1 == x2 || y1 == y2) ||
                 abs(x1 - x2) == abs(y1 - y2));

  cout << result << endl;
  return 0;
}