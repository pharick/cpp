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

void sumArrs(int arr1[SZ][SZ], int arr2[SZ][SZ], short n, short m, int arrSum[SZ][SZ]) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      arrSum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
}

void printArr(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int arr1[SZ][SZ], arr2[SZ][SZ], arrSum[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr1, n, m);
  readArr(arr2, n, m);

  sumArrs(arr1, arr2, n, m, arrSum);

  printArr(arrSum, n, m);
  return 0;
}
