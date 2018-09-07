#include <iostream>
using namespace std;

void readArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void swapElements(int arr[], int a, int b) {
  int tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

int* rearrange(int arr[], int n) {
  int *newArr = new int [n];
  for (int i = 0; i < n; i += 2) {
    newArr[i] = arr[i + 1];
    newArr[i + 1] = arr[i];
  }
  return newArr;
}

void printArrays(int arr[], int newArr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " "
         << newArr[i] << endl;
  }
}

int main() {
  int n;
  cin >> n;
  int *arr = new int [n];
  readArray(arr, n);
  int *newArr = rearrange(arr, n);
  printArrays(arr, newArr, n);
  delete [] arr;
  delete [] newArr;
  return 0;
}
