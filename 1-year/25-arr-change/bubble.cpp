#include <iostream>
using namespace std;

int main() {
  short arr[50] = {}, n;

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (short j = 0; j < n; j++) {
    for (short i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        short tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
      }
    }
  }

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
