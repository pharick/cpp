#include <iostream>
using namespace std;

void readArray(short arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(short arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertLast(short arr[100], short n, short k) {
  short last = arr[n-1];
  for (short i = n - 2; i >= k-1; i--) {
    arr[i+1] = arr[i];
  }
  arr[k-1] = last;
}

int main() {
  short n, k, arr[100];
  
  cin >> n;
  readArray(arr, n);
  cin >> k;
  
  insertLast(arr, n, k);

  printArray(arr, n);
  return 0;
}