#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  short count = 0;
  for (short i = 0; i < n; i++) {
    bool isFirst = true;
    for (short j = i - 1; j >= 0; j--) {
      if (arr[i] == arr[j]) {
        isFirst = false;
        break;
      }
    }
    if (isFirst) count++;
  }

  cout << count << endl;
  return 0;
}
