#include <iostream>
using namespace std;

bool is_in_square(double x, double y) {
  if (x >= -1 && x <= 1 && y >= -1 && y <= 1) return true;
  return false;
}

int main() {
  double x, y;
  cin >> x >> y;

  cout << (is_in_square(x, y) ? "YES" : "NO") << endl;
  return 0;
}