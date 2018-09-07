#include <iostream>
using namespace std;

const short SZ = 100;

void readArray(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

void printArray(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void swapLines(int arr[SZ][SZ], short m, short i1, short i2) {
  int tmp[SZ];
  for (short j = 0; j < m; j++) {
    tmp[j] = arr[i1][j];
  }

  for (short j = 0; j < m; j++) {
    arr[i1][j] = arr[i2][j];
  }

  for (short j = 0; j < m; j++) {
    arr[i2][j] = tmp[j];
  }
}

int main() {
  short n, m;
  int arr[SZ][SZ];

  cin >> n >> m;
  readArray(arr, n, m);

  for (short i = 0; i < n - 1; i+=2) {
    swapLines(arr, m, i, i + 1);
  }

  printArray(arr, n, m);
  return 0;
}
