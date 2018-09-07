#include <iostream>
using namespace std;

int* naturals(int n) {
  int *arr = new int [n];
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
  return arr;
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
  int *arr = naturals(n);
  printArray(arr, n);
  delete [] arr;
  return 0;
}
