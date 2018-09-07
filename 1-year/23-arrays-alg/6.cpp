#include <iostream>
using namespace std;

int main() {
  short n, x, arr[100] = {};
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> x;

  int sum = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i] % x == 0) sum += arr[i];
  }

  cout << sum << endl;
  return 0;
}
