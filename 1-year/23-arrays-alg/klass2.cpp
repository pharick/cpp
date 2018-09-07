#include <iostream>
using namespace std;

int main() {
  short n, k;
  short a[100] = {};

  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> k;

  short kPos = 0;
  for (short i = 0; i < n; i++) {
    if (a[i] == k) {
      kPos = i + 1;
      break;
    };
  }

  cout << kPos << endl;
  return 0;
}
