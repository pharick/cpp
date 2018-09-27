#include <iostream>
using namespace std;

void read_array(int arr[], int n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

bool is_permutation(int* a, int* b, int size) {
  bool result = true;
  for (int i = 0; i < size; i++) {
    bool is_occurs = false;
    for (int j = 0; j < size; j++) {
      if (a[i] == b[j]) {
        is_occurs = true;
        b[j] = -1;
        break;
      }
    }

    if (!is_occurs) {
      result = false;
    }
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  int *arr1 = new int[n],
      *arr2 = new int[n];

  read_array(arr1, n);
  read_array(arr2, n);

  cout << (is_permutation(arr1, arr2, n) ? "YES" : "NO") << endl;

  delete [] arr1;
  delete [] arr2;
  return 0;
}