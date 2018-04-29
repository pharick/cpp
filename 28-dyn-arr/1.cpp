#include <iostream>
using namespace std;

void readArray(short arr[], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(short arr[], short n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

short findLastMinIndex(short arr[], short n) {
  short minIndex = 0;
  for (short i = 1; i < n; i++) {
    if (arr[i] <= arr[minIndex]) {
      minIndex = i;
    }
  }
  return minIndex;
}

void swapElements(short arr[], short a, short b) {
  short tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

int main() {
  short n;
  cin >> n;
  short *arr = new short [n];
  readArray(arr, n);
  short lastMinIndex = findLastMinIndex(arr, n);
  swapElements(arr, 0, lastMinIndex);
  printArray(arr, n);
  delete [] arr;
  return 0;
}
