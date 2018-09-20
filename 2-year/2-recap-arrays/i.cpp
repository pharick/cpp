#include <iostream>
using namespace std;

void readArray(short arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

short findMissing(short arr1[100], short arr2[100], short n, short m, short missArr[100]) {
  short place = 0;

  for (int i = 0; i < n; i++) {
    bool isAbsent = true;
    for (int j = 0; j < m; j++) {
      if (arr2[j] == arr1[i]) {
        isAbsent = false;
        break;
      }
    }

    if (isAbsent) {
      missArr[place++] = arr1[i];
    }
  }
  
  return place;
}

void swap(short arr[], short a, short b) {
  int tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

void sortArray(short arr[], short n) {
  for (short j = 0; j < n; j++) {
    for (short i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr, i, i + 1);
      }
    }
  }
}

void printArray(short arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  short n, m, count, arr1[100], arr2[100], missArr[100];
  
  cin >> n;
  readArray(arr1, n);
  cin >> m;
  readArray(arr2, m);

  count = findMissing(arr1, arr2, n, m, missArr);

  sortArray(missArr, count);
  printArray(missArr, count);
  return 0;
}