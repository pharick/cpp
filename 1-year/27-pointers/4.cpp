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

void swap(int arr[], int a, int b) {
  int tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

void reverse_array(int arr[], int size) {
  for (int i = 0, j = size - 1; i < j; i++, j--) {
    swap(arr, i, j);
  }
}

int main() {
  int arr[100], n;
  cin >> n;
  read_array(arr, n);
  reverse_array(arr, n);
  print_array(arr, n);
  return 0;
}
