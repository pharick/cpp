#include <iostream>
using namespace std;

int main() {
  short n;
  short a[100] = {};

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> a[i];
  }

  short count = 0;
  
  if (a[0] > a[1]) count++;
  if (a[n - 1] > a[n - 2]) count++;

  for (short i = 1; i < n - 1; i++) {
    if (a[i] > a[i - 1] && a[i] > a[i + 1]) count++;
  }

  cout << count << endl;
  return 0;
}
