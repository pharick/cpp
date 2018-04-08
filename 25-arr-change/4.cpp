#include <iostream>
using namespace std;

int main() {
  short arr[100] = {}, n;
  cin >> n;

  short maxIndex, max = -101;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max) {
      max = arr[i];
      maxIndex = i;
    }
  }

  for (short i = maxIndex; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  arr[n - 1] = max;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
