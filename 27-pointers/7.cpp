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

int delete_from_array(int arr[], int size, int k) {
  for (short i = k; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  size--;
  return size;
}

void unique(int arr[], int *size) {
  for (int i = 0; i < *size - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      *size = delete_from_array(arr, *size, i);
      i--;
    }
  }
}

int main() {
  int arr[100], n;
  cin >> n;
  read_array(arr, n);
  unique(arr, &n);
  print_array(arr, n);
  return 0;
}
