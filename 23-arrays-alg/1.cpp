#include <iostream>
using namespace std;

int main() {
  short n, a, arr[100] = {};
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> a;

  int sum = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i] > a) sum += arr[i];
  }

  cout << sum << endl;
  return 0;
}
