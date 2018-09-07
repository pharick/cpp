#include <iostream>
using namespace std;

const short SZ = 100;

void readArr(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

bool isMagick(int arr[SZ][SZ], short n) {
  long sum, lastSum = 0;

  for (short i = 0; i < n; i++) {
    lastSum += arr[0][i];
  }

  for (short i = 1; i < n; i++) {
    sum = 0;
    for (short j = 0; j < n; j++) {
      sum += arr[i][j];
    }
    if (sum != lastSum) return false;
    lastSum = sum;
  }

  for (short i = 0; i < n; i++) {
    sum = 0;
    for (short j = 0; j < n; j++) {
      sum += arr[j][i];
    }
    if (sum != lastSum) return false;
    lastSum = sum;
  }

  sum = 0;
  for (short i = 0; i < n; i++) {
    sum += arr[i][i];
  }
  if (sum != lastSum) return false;
  lastSum = sum;

  sum = 0;
  for (short i = 0; i < n; i++) {
    sum += arr[i][n - i - 1];
  }
  if (sum != lastSum) return false;

  return true;
}

int main() {
  int arr[SZ][SZ];
  short n;

  cin >> n;
  readArr(arr, n, n);

  cout << (isMagick(arr, n) ? "YES" : "NO") << endl;
  return 0;
}
