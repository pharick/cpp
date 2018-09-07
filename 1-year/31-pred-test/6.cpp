#include <iostream>
using namespace std;

const short SZ = 500;

void readArray(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

bool isPosCol(int arr[SZ][SZ], short n, short j) {
  bool res = true;
  for (short i = 0; i < n; i++) {
    if (arr[i][j] < 0) {
      res = false;
      break;
    }
  }
  return res;
}

int main() {
  short n, m;
  int arr[SZ][SZ];

  cin >> n >> m;
  readArray(arr, n, m);

  bool res = false;
  for (short j = 0; j < m; j++) {
    if (isPosCol(arr, n, j)) {
      res = true;
      break;
    }
  }

  cout << (res ? "YES" : "NO") << endl;
  return 0;
}
