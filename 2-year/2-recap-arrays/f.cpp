#include <iostream>
using namespace std;

void readArray2(int arr[500][500], short n) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
}

void findMaxDiag2(int arr[500][500], short n) {
  short minI = 0, minJ = n - 1;
  int min = arr[minI][minJ];

  for (short i = minI + 1, j = minJ - 1; i < n; i++, j--) {
    if (arr[i][j] < min) {
      min = arr[i][j];
      minI = i;
      minJ = j;
    }
  }

  cout << minI + 1 << " " << minJ + 1 << endl;
}

int main() {
  short n;
  int arr[500][500];
  
  cin >> n;
  readArray2(arr, n);

  findMaxDiag2(arr, n);
  return 0;
}