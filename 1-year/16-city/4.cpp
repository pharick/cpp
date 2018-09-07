#include <iostream>
using namespace std;

int main() {
  short x, n;
  cin >> x >> n;

  for (short i = 1; i <= n; i++) {
    x *= 2;
  }

  cout << x << endl;
  return 0;
}
