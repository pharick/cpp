#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void read_array(int arr[], int n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void print_array(int arr[], int n) {
  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int* array_insert(int* a, int n, int x = 100, int k = 0) {
    int* arr = new int [n + 1];
    bool is_insert = false;

    for (int i = 0, j = 0; i < n, j <= n; i++, j++) {
      if (!is_insert && i == k) {
        arr[j] = x;
        i--;
        is_insert = true;
      } else {
        arr[j] = a[i];
      }
    }

    return arr;
}

int main() {
  int n;
  cin >> n;

  int* arr = new int[n];
  read_array(arr, n);

  int x, k;
  cin >> x >> k;

  print_array(array_insert(arr, n, x, k), n + 1);
  
  delete [] arr;
  return 0;
}