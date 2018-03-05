#include <iostream>
using namespace std;

int main() {
  short n, count = 0;
  cin >> n;

  for (short m1 = 0; m1 <= n; m1++) {
    for (short m2 = 0; m2 <= n; m2++) {
      for (short m5 = 0; m5 <= n; m5++) {
        for (short m10 = 0; m10 <= n; m10++) {
          if (m1 + m2*2 + m5*5 + m10*10 == n) {
            count++;
          }
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}
