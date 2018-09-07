#include <iostream>
using namespace std;

int main() {
  int arr[10000] = {};
  short n;

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (short i = 0; i < n; i++) {
    for (short j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        for (short k = j; k < n - 1; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
  }

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
