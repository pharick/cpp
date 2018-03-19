#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  cin >> arr[0];
  short max = arr[0], min = arr[0];
  for (short i = 1; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max) max = arr[i];
    if (arr[i] < min) min = arr[i];
  }

  cout << max << " " << min << endl;
  return 0;
}
