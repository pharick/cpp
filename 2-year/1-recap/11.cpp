#include <iostream>
#include <cmath>
using namespace std;

int findRamanujan(int n) {
  n += 1;

  while (true) {
    bool count = false;
    
    for (int i = 1; i <= 100; i++) {
      for (int j = 1; j <= i; j++) {
        if (i*i*i + j*j*j == n) {
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

  cout << findRamanujan(n) << endl;
  return 0;
}