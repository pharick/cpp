#include <iostream>
using namespace std;

int main() {
  short arr[10000] = {}, n, k, m;

  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k >> m;

  for (short i = m, j = k; i < n - 1; i++, j++) {
    arr[j] = arr[i + 1];
  }
  n -= m - k + 1;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
