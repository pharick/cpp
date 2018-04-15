#include <iostream>
using namespace std;

void readArray(int arr[], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[], short n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

short countNonNull(int arr[], short n) {
  short nonNullCount = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i] != 0) nonNullCount++;
  }
  return nonNullCount;
}

void swap(int arr[], int a, int b) {
  int tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

void sortArray(int arr[], short n) {
  for (short j = 0; j < n; j++) {
    for (short i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr, i, i + 1);
      }
    }
  }
}

void mergeArray(int result[], int arr1[], short n1, int arr2[], short n2) {
  short index = 0;
  for (short i = 0; i < n1; i++) {
    result[index] = arr1[i];
    index++;
  }
  for (short i = 0; i < n2; i++) {
    result[index] = arr2[i];
    index++;
  }
}

int main() {
  int arr1[100], arr2[100], result[200];
  short n1, n2;

  cin >> n1;
  readArray(arr1, n1);
  cin >> n2;
  readArray(arr2, n2);

  cout << n1 - countNonNull(arr1, n1) << ' ';
  cout << n2 - countNonNull(arr2, n2) << endl;

  mergeArray(result, arr1, n1, arr2, n2);
  sortArray(result, n1 + n2);
  printArray(result, n1 + n2);

  return 0;
}
