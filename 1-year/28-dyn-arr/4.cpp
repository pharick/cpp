#include <iostream>
#include <cmath>
using namespace std;

void readArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int deleteElement(int arr[], int size, int k) {
  for (short i = k; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  size--;
  return size;
}

int main() {
  int n, k;
  cin >> n;
  int *arr = new int [n];
  readArray(arr, n);
  cin >> k;

  for (int i = 0; i < n; i++) {
    if (arr[i] == k) {
      n = deleteElement(arr, n, i);
      i--;
    }
  }

  printArray(arr, n);
  delete [] arr;
  return 0;
}
