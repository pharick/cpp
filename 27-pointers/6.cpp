#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void read_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void shift_once(int arr[], int size, bool negative) {
  if (negative) {
    int tmp = arr[0];
    for (int i = 0; i < size - 1; i++) {
      arr[i] = arr[i + 1];
    }
    arr[size - 1] = tmp;
  } else {
    int tmp = arr[size - 1];
    for (int i = size - 1; i > 0 ; i--) {
      arr[i] = arr[i - 1];
    }
    arr[0] = tmp;
  }
}

void shift(int arr[], int size, int k) {
  bool negative = false;
  if (k < 0) {
    negative = true;
    k *= -1;
  }

  for (int i = 0; i < k; i++) {
    shift_once(arr, size, negative);
  }
}

int main() {
  int arr[100], n, k;
  cin >> n;
  read_array(arr, n);
  cin >> k;
  shift(arr, n, k);
  print_array(arr, n);
  return 0;
}
