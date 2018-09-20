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

int main() {
  short n, arr[100];
  
  cin >> n;
  readArray(arr, n);

  for (short i = 0; i < n; i += 2) {
    short tmp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = tmp;
  }
  
  printArray(arr, n);
  return 0;
}