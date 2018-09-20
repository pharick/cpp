#include <iostream>
using namespace std;

void readArray(int arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void mixArray(int arr1[100], int arr2[100], int newArr[100], short n) {
  for (short i = 0, newI = 0; i < n; i++, newI += 2) {
    newArr[newI] = arr1[i];
    newArr[newI+1] = arr2[i];
  }
}

int main() {
  short n;
  int arr1[100], arr2[100], newArr[200];
  
  cin >> n;
  readArray(arr1, n);
  readArray(arr2, n);

  mixArray(arr1, arr2, newArr, n);

  printArray(newArr, n*2);
  return 0;
}