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

void printDiagonal(int arr[SZ][SZ], short n) {
  for (int i = n - 1; i >= 0; i--) {
    cout << arr[i][i] << " ";
  }
  cout << endl;
}

int main() {
  short n;
  int arr[SZ][SZ];

  cin >> n;
  readArray(arr, n, n);

  printDiagonal(arr, n);
  return 0;
}
