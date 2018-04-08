#include <iostream>
using namespace std;

int main() {
  int arr[100] = {};
  short n, k;

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k;

  for (short i = k; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  n--;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
