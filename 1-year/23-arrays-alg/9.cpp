#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  short max = -1001 * 5;
  short index = -1;
  for (short i = 0; i < n - 4; i++) {
    short sum = 0;
    for (short j = i; j < i + 5; j++) sum += arr[j];
    if (sum > max) {
      max = sum;
      index = i + 1;
    }
  }

  cout << index << endl;
  return 0;
}
