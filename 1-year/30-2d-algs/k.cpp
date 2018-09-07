#include <iostream>
using namespace std;

void printArr(int arr[100][100], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  short n;
  int arr[100][100] = {};

  cin >> n;

  short counter = 1;
  short end = n;

  for (short j = 0; j < (n % 2 == 0 ? n / 2 : n / 2 + 1); j++) {
    for (short i = n - end; i < end; i++) {
      arr[n - end][i] = counter;
      counter++;
    }
    for (short i = n - end + 1; i < end; i++) {
      arr[i][end - 1] = counter;
      counter++;
    }
    for (short i = end - 2; i >= n - end; i--) {
      arr[end - 1][i] = counter;
      counter++;
    }
    for (short i = end - 2; i > n - end; i--) {
      arr[i][n - end] = counter;
      counter++;
    }
    end--;
  }

  printArr(arr, n, n);

  return 0;
}
