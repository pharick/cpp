#include <iostream>
using namespace std;

void numswap(int *a, int *b) {
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

int main() {
  int x, y;
  cin >> x >> y;
  numswap(&x, &y);
  cout << x << " " << y << endl;
  return 0;
}
