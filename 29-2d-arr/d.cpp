#include <iostream>
using namespace std;

int main() {
  short n, m, arr[100][100];

  cin >> n >> m;

  short val = 1;
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      arr[i][j] = val;
      val++;
    }
  }

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  return 0;
}
