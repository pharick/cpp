#include <iostream>
using namespace std;

int main() {
  short arr[35] = {}, n;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (short i = 0; i < n / 2; i++) {
    short tmp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = tmp;
  }

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
