#include <iostream>
using namespace std;

int main() {
  short n, arr[100][100];

  cin >> n;

  for (short i = 0; i < n; i++)
    arr[0][i] = i + 1;

  for (short i = 0; i < n; i++) {
    int tmp = arr[i][0];
    for (int j = 0; j < n - 1; j++) {
      arr[i + 1][j] = arr[i][j + 1];
    }
    arr[i + 1][n - 1] = tmp;
  }

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
