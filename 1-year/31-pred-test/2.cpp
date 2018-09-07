#include <iostream>
using namespace std;

int max(int x, int y) {
  if (x > y) return x;
  return y;
}

int main() {
  int a, b;
  cin >> a >> b;

  int z = max(a, 2*b) * max(2*a - b, b);
  cout << z << endl;

  return 0;
}
