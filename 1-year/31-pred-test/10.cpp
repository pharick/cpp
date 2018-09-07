#include <iostream>
using namespace std;

const short SZ = 100;

void readArray(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

void multiplicity(int arr[SZ][SZ], short n, short j, short x, short y, int* sum, short* count) {
  *sum = 0;
  *count = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i][j] % x == 0 || arr[i][j] % y == 0) {
      *sum += arr[i][j];
      (*count)++;
    }
  }
}

void range(int arr[SZ][SZ], short n, short j, short x, short y, int* sum, short* count) {
  *sum = 0;
  *count = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i][j] >= x && arr[i][j] <= y) {
      *sum += arr[i][j];
      (*count)++;
    }
  }
}

bool isPrime(int n) {
  if (n <= 1) return false;

  bool result = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      result = false;
      break;
    }
  }
  return result;
}

void primes(int arr[SZ][SZ], short n, short j, int* sum, short* count) {
  *sum = 0;
  *count = 0;
  for (short i = 0; i < n; i++) {
    if (isPrime(arr[i][j])) {
      *sum += arr[i][j];
      (*count)++;
    }
  }
}

void positive(int arr[SZ][SZ], short n, short j, int* sum, short* count) {
  *sum = 0;
  *count = 0;
  for (short i = 0; i < n; i++) {
    if (arr[i][j] > 0) {
      *sum += arr[i][j];
      (*count)++;
    }
  }
}

int main() {
  short n, x, y;
  int arr[SZ][SZ];

  cin >> n;
  readArray(arr, n, n);

  cin >> x >> y;

  int sum;
  short count;
  for (short j = 0; j < n; j++) {
    multiplicity(arr, n, j, x, y, &sum, &count);
    cout << count << " " << sum << " ";
    range(arr, n, j, x, y, &sum, &count);
    cout << count << " " << sum << " ";
    primes(arr, n, j, &sum, &count);
    cout << count << " " << sum << " ";
    positive(arr, j, j, &sum, &count);
    cout << count << " " << sum << " ";
    cout << endl;
  }

  return 0;
}
