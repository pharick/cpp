#include <iostream>
using namespace std;

int main() {
  short l, r;
  cin >> l >> r;

  for (short x = l; x <= r; x++) {
    for (short y = l; y <= r; y++) {
      for (short k = l; k <= r; k++) {
        if (x*x + y*y == k*k) {
          cout << x << " " << y << " " << k << endl;
        }
      }
    }
  }

  return 0;
}
