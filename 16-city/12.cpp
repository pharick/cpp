#include <iostream>
using namespace std;

int main() {
  short n, x1, x2;
  int sum1 = 0, sum2 = 0;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> x1 >> x2;
    sum1 += x1;
    sum2 += x2;
  }

  bool success = (sum1 / n - sum2 / n >= 20);
  cout << (success ? "YES" : "NO") << endl;
  return 0;
}
