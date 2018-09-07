#include <iostream>
#include <cmath>
using namespace std;

void readArray(short arr[], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printEvenOrOdd(short arr[], short n, bool odd) {
  short rem = odd ? 1 : 0;
  for (short i = 0; i < n; i++) {
    if (abs(arr[i] % 2) == rem) {
      cout << arr[i] << " ";
    }
  }
}

int main() {
  short n;
  cin >> n;
  short *arr = new short [n];
  readArray(arr, n);
  printEvenOrOdd(arr, n, false);
  printEvenOrOdd(arr, n, true);
  cout << endl;
  delete [] arr;
  return 0;
}
