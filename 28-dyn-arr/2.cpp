#include <iostream>
using namespace std;

void readArray(short arr[], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

int countSumOfEverySecond(short arr[], short n, short first) {
  int sum = 0;
  for (short i = first; i < n; i += 2) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  short n;
  cin >> n;
  short *arr = new short [n];
  readArray(arr, n);
  short oddSum = countSumOfEverySecond(arr, n, 0);
  short evenSum = countSumOfEverySecond(arr, n, 1);
  cout << (evenSum > oddSum ? "YES" : "NO") << endl;
  delete [] arr;
  return 0;
}
