#include <iostream>
using namespace std;

int main() {
  short n;
  short a[31] = {};
  cin >> n;

  short count = 0;
  cin >> a[0];
  for (short i = 1; i < n; i++) {
    cin >> a[i];
    if (a[i] > a[i - 1]) {
      cout << i + 1 << " ";
      count++;
    }
  }

  if (!count) cout << 0;
  cout << endl;
  return 0;
}
