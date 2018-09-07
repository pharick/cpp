#include <iostream>
using namespace std;

int main() {
  short arr[15] = {}, k, s;

  for (short i = 0; i < 15; i++) {
    cin >> arr[i];
  }
  cin >> k >> s;

  for (short i = k, j = s - 2; j > i; i++, j--) {
    short tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }

  for (short i = 0; i < 15; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
