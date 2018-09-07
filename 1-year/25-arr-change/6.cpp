#include <iostream>
using namespace std;

int main() {
  short arr[35] = {}, n;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  short lastItem = arr[n - 1];
  for (short i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = lastItem;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
