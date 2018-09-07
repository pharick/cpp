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

int sumMainDiag(int arr[SZ][SZ], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i][i];
  }
  return sum;
}

int sumAddDiag(int arr[SZ][SZ], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i][n - i - 1];
  }
  return sum;
}

int main() {
  short n;
  int arr[SZ][SZ];

  cin >> n;
  readArray(arr, n, n);

  int sumMain = sumMainDiag(arr, n);
  int sumAdd = sumAddDiag(arr, n);

  cout << (sumMain == sumAdd ? "DRAW" :
           sumMain > sumAdd ? "GENA" : "CHEBURASHKA")
       << endl;
  return 0;
}
