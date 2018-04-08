#include <iostream>
using namespace std;

int main() {
  short n;
  short arr[100] = {};
  cin >> n;

  cin >> arr[0];
  short min = arr[0], max = arr[0];
  for (short i = 1; i < n; i++) {
    cin >> arr[i];
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }

  short diff = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i] == max) diff++;
    if (arr[i] == min) diff--;
  }

  cout << diff << endl;
  return 0;
}
