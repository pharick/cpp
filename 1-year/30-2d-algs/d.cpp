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

int findMax(int arr[SZ], short m) {
  int max = arr[0];
  for (short i = 1; i < m; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int findMin(int arr[SZ], short m) {
  int min = arr[0];
  for (short i = 1; i < m; i++) {
    if (arr[i] < min) min = arr[i];
  }
  return min;
}

int main() {
  int arr[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr, n, m);

  for (short i = 0; i < n; i++) {
    cout << findMax(arr[i], m) << " "
         << findMin(arr[i], m) << endl;
  }

  return 0;
}
