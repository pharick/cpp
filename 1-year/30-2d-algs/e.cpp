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

int findMaxInCol(int arr[SZ][SZ], short col, short n) {
  int max = arr[0][col];
  for (short i = 1; i < n; i++) {
    if (arr[i][col] > max) max = arr[i][col];
  }
  return max;
}

int findMinInCol(int arr[SZ][SZ], short col, short n) {
  int min = arr[0][col];
  for (short i = 1; i < n; i++) {
    if (arr[i][col] < min) min = arr[i][col];
  }
  return min;
}

int main() {
  int arr[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr, n, m);

  for (short i = 0; i < m; i++) {
    cout << findMaxInCol(arr, i, n) << " "
         << findMinInCol(arr, i, n) << endl;
  }

  return 0;
}
