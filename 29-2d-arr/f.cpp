#include <iostream>
using namespace std;

int main() {
  short n, m;
  int arr[20][20];

  cin >> n >> m;

  for (short i = 0; i < n; i++)
    for (short j = 0; j < m; j++)
      arr[i][j] = i * j;

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
