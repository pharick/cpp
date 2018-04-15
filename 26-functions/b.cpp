#include <iostream>
using namespace std;

long min(int x, int y) {
  return x < y ? x : y;
}

int main() {
  int a, b;
  cin >> a >> b;

  long z = min(a, 3*b) * min(2*a - b, 2*b);
  cout << z << endl;
  return 0;
}
