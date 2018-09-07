#include <iostream>
using namespace std;

void makeArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void reverse(int arr[], int l, int r) {
  for (int i = l - 1, j = r - 1; i < j; i++, j--) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }
}

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main() {
  int n, a, b, c, d, arr[1000] = {};
  cin >> n >> a >> b >> c >> d;

  makeArr(arr, n);
  reverse(arr, a, b);
  reverse(arr, c, d);
  printArr(arr, n);

  return 0;
}
