#include <iostream>
using namespace std;

int main() {
  short n, m;
  int arr[10][10];

  cin >> n >> m;

  for (short i = 0; i < m; i++)
    arr[0][i] = 1;
  for (short i = 1; i < n; i++)
    arr[i][0] = 1;

  for (short i = 1; i < n; i++)
    for (short j = 1; j < m; j++)
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
