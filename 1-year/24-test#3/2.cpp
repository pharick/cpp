#include <iostream>
using namespace std;

int main() {
  int n;
  int arr[100000] = {};
  cin >> n;

  cin >> arr[0];
  long min = arr[0], max = arr[0];
  for (int i = 1; i < n; i++) {
    cin >> arr[i];
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }

  cout << (min + max) / 2.0 << endl;
  return 0;
}
