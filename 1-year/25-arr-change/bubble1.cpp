#include <iostream>
using namespace std;

int main() {
  int arr[1000] = {};
  short n;

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int steps = 0;
  for (short j = 0; j < n; j++) {
    for (short i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        short tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;

        steps++;
      }
    }
  }

  cout << steps << endl;

  return 0;
}
