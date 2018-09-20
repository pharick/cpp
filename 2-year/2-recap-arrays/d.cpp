#include <iostream>
using namespace std;

void readArray(long arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray2(long arr[100][100], short n) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void copyArray(long arr[100], long newArr[100], short n) {
  for (short i = 0; i < n; i++) {
    newArr[i] = arr[i];
  }
}

void shiftArray(long arr[100], long newArr[100], short n) {
  newArr[0] = arr[n - 1];
  for (short i = 0; i < n - 1; i++) {
    newArr[i + 1] = arr[i];
  }
}

int main() {
  short n;
  long arr[100];
  long shiftArr[100][100] = {};
  
  cin >> n;
  readArray(arr, n);

  copyArray(arr, shiftArr[0], n);

  for (short i = 0; i < n - 1; i++) {
    shiftArray(shiftArr[i], shiftArr[i + 1], n);
  }
  
  printArray2(shiftArr, n);
  return 0;
}