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

  int min = arr[0][0], max = arr[0][0];
  short minX = 1, minY = 1,
        maxX = 1, maxY = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] < min) {
        min = arr[i][j];
        minX = i + 1;
        minY = j + 1;
      }

      if (arr[i][j] > max) {
        max = arr[i][j];
        maxX = i + 1;
        maxY = j + 1;
      }
    }
  }

  cout << minX << " " << minY << " " << min << endl;
  cout << maxX << " " << maxY << " " << max << endl;

  return 0;
}
