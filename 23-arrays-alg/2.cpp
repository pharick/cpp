#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  int sqSum = 0;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    sqSum += arr[i] * arr[i];
  }

  cout << (sqSum >= 10000 && sqSum <= 99999 ? "YES" : "NO") << endl;
  return 0;
}
