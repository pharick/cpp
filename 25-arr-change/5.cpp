#include <iostream>
using namespace std;

int main() {
  short arr[100] = {}, n;
  cin >> n;

  short minIndex, min = 101;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] < min) {
      min = arr[i];
      minIndex = i;
    }
  }

  for (short i = minIndex; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = min;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
