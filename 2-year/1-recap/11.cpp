#include <iostream>
#include <cmath>
using namespace std;

int findRamanujan(int n) {
  while (true) {
    bool count = false;
    
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        if (i*i*i + j*j*j == n) {
          cout << i << " " << j << " " << n << endl;
          if (count) {
            return n;
          } else {
            count = true;
          }
        }
      }
    }

    n++;
  }
}

int main() {
  int n;
  cin >> n;

  cout << 4096*4096*4096 + 16*16*16 << endl;
  // cout << findRamanujan(n) << endl;
  return 0;
}