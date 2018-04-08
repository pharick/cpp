#include <iostream>
using namespace std;

int main() {
  short n;
  short arr[100] = {};
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bool isRecursive = true;
  for (short i = 0, j = n - 1;
       i < j; i++, j--) {
         if (arr[i] != arr[j]) {
           isRecursive = false;
           break;
         }
       }

  if (isRecursive) {
    cout << 0 << endl;
  } else {
      if (arr[n - 1] == arr[n - 2]) {
        cout << n - 2 << endl;
        for (short i = n - 3; i >= 0; i--) {
          cout << arr[i] << " ";
        }
      } else {
        cout << n - 1 << endl;
        for (short i = n - 2; i >= 0; i--) {
          cout << arr[i] << " ";
        }
      }
  }

  cout << endl;
  return 0;
}
