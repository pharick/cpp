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

  long sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum += arr[i][j];
    }
  }

  cout << sum << endl;

  return 0;
}
