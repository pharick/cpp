#include <iostream>
using namespace std;

const short SZ = 100;

void readArr(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

bool isPositiveRow(int arr[SZ], short m) {
  bool result = true;
  for (short i = 0; i < m; i++) {
    if (arr[i] < 0) {
      result = false;
      break;
    }
  }
  return result;
}

int main() {
  int arr[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr, n, m);

  bool result = false;
  for (short i = 0; i < n; i++) {
    if (isPositiveRow(arr[i], m)) {
      result = true;
      break;
    }
  }

  cout << (result ? "YES" : "NO") << endl;
  return 0;
}
