#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  if (x1 / abs(x1) == x2 / abs(x2) && y1 / abs(y1) == y2 / abs(y2))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
