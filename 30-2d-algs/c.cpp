#include <iostream>
using namespace std;

const short SZ = 100;

void readArr(int arr[SZ][SZ], short n, short m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
}

int main() {
  int arr[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr, n, m);

  int max = arr[0][2],
      row = 1;

  for (int i = 1; i < n; i++) {
    if (arr[i][2] >= max) {
      max = arr[i][2];
      row = i + 1;
    }
  }

  cout << row << endl;

  return 0;
}
