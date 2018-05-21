#include <iostream>
using namespace std;

short sign(int a) {
  if (a < 0) return -1;
  if (a > 0) return 1;
  return 0;
}

int main() {
  int x, y;
  cin >> x >> y;

  short z = sign(x) + sign(y);
  cout << z << endl;

  return 0;
}
