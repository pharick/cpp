#include <iostream>
using namespace std;

int main() {
  short n, p,
  k1 = 0, k2 = 0, k3 = 0;
  int sum = 0;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> p;
    if (p > 0) k1++;
    else if (p < 0) k2++;
    else k3++;
    sum += p;
  }

  cout << k1 << " " << k2 << " " << k3 << endl
       << sum << endl;
  return 0;
}
