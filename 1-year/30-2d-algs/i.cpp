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

bool isEqualSign(int a, int b) {
  if ((a >= 0 && b >= 0) || (a < 0 && b < 0)) return true;
  return false;
}

void printArr(int arr[SZ][SZ], short n, short m) {
  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int arr1[SZ][SZ], arr2[SZ][SZ], arrRes[SZ][SZ];
  short n, m;

  cin >> n >> m;
  readArr(arr1, n, m);
  readArr(arr2, n, m);

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      if (isEqualSign(arr1[i][j], arr2[i][j])) {
        arrRes[i][j] = 100;
      } else {
        arrRes[i][j] = 0;
      }
    }
  }

  printArr(arrRes, n, m);
  return 0;
}
