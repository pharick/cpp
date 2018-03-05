#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (short d1 = 1; d1 < n; d1++) {
    short divSum1 = 0;
    for (short dvdr1 = 1; dvdr1 < d1; dvdr1++) {
      if (d1 % dvdr1 == 0) {
        divSum1 += dvdr1;
      }
    }

    for (short d2 = 1; d2 < n; d2++) {
      if (d1 != d2 && d2 == divSum1) {
        short divSum2 = 0;
        for (short dvdr2 = 1; dvdr2 < d2; dvdr2++) {
          if (d2 % dvdr2 == 0) {
            divSum2 += dvdr2;
          }
        }

        if (d1 == divSum2) {
          cout << d1 << " " << d2 << endl;
        }
      }
    }
  }

  return 0;
}
