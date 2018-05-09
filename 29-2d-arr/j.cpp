#include <iostream>
using namespace std;

int main() {
  short n, arr[100][100] = {};

  cin >> n;

  for (short d = 1; d <= n; d++) {
    for (short i = 0, j = d; i < n, j < n; i++, j++) {
      arr[i][j] = d;
      arr[j][i] = d;
    }
  }

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  cout << endl;
  return 0;
}
