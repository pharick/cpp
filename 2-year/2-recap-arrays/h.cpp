#include <iostream>
using namespace std;

void readArray2(int arr[500][500], short n) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
}

void printAboveDiag(int arr[500][500], short n) {
  for (short i = 0; i < n; i++) {
    for (short j = i + 1; j < n; j++) {
      cout << arr[i][j] << " ";
    }
  }
  cout << endl;
}

int main() {
  short n;
  int arr[500][500];
  
  cin >> n;
  readArray2(arr, n);

  printAboveDiag(arr, n);
  return 0;
}