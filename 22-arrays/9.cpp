#include <iostream>
using namespace std;

int main() {
  short arr[100];
  short n, k1, k2;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k1 >> k2;

  short sum = 0;
  for (short i = k1 - 1; i < k2; i++) {
    sum += arr[i];
  }

  cout << sum << endl;
  return 0;
}
