#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (short d1 = 1; d1 < n; d1++) {
    short d2 = 0;
    for (short divr = 1; divr < d1; divr++) {
      if (d1 % divr == 0) d2 += divr;
    }

    if (d2 < n && d1 != d2) {
      short dSum2 = 0;
      for (short divr = 1; divr < d2; divr++) {
        if (d2 % divr == 0) dSum2 += divr;
      }

      if (d1 == dSum2) {
        cout << d1 << " " << d2 << endl;
      }
    }
  }

  return 0;
}
