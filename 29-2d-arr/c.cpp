#include <iostream>
using namespace std;

int main() {
  short n, arr[100][100] = {};

  cin >> n;

  for (short i = 0; i < n; i++) {
    arr[i][i] = 1;
    arr[i][n - i - 1] = 1;
  }

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
