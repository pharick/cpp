#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (short x = 1; x <= n; x++) {
    for (short y = 1; y <= n; y++) {
      for (short z = 1; z <= n; z++) {
        if (x*x + y*y + z*z == n) {
          cout << x << " " << y << " " << z << endl;
        }
      }
    }
  }

  return 0;
}
