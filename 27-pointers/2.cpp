#include <iostream>
using namespace std;

void readArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void count_odd_even(int n, int *odd, int *even) {
  do {
    short digit = n % 10;
    if (digit % 2 == 0) *even = *even + 1;
    else *odd = *odd + 1;
    n /= 10;
  } while (n);
}

int main() {
  int arr[10];
  readArray(arr, 10);

  for (int i = 0; i < 10; i++) {
    int odd = 0, even = 0;
    count_odd_even(arr[i], &odd, &even);
    cout << " " << odd << " " << even << endl;
  }

  return 0;
}
