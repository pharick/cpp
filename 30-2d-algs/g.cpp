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

long rowSum(int arr[SZ], short m) {
  long sum = 0;
  for (short i = 0; i < m; i++) {
    sum += arr[i];
  }
  return sum;
}

void printRow(int arr[SZ], short m) {
  for (short i = 0; i < m; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr, n, m);

  long minSum = rowSum(arr[0], m);
  short minSumI = 0;

  for (short i = 1; i < n; i++) {
    long sum = rowSum(arr[i], m);
    if (sum < minSum) {
      minSum = sum;
      minSumI = i;
    }
  }

  printRow(arr[minSumI], m);
  return 0;
}
