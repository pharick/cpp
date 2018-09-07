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

int* sumArrays(int a[], int b[], int n) {
  int *newArr = new int [n];
  for (int i = 0; i < n; i++) {
    newArr[i] = a[i] + b[i];
  }
  return newArr;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  int *a = new int [n];
  readArray(a, n);
  int *b = new int [n];
  readArray(b, n);

  int *newArr = sumArrays(a, b, n);
  printArray(newArr, n);
  delete [] a;
  delete [] b;
  delete [] newArr;
  return 0;
}
