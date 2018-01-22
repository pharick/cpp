#include <iostream>
using namespace std;

int main() {
  short n, lic = 0;
  int k, sum = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> k;
    if (k > 1000) {
      lic++;
      sum += k;
    };
  }

  cout << lic << " " << sum << endl;
  return 0;
}
