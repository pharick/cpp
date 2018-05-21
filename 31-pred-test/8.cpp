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

int sumMainDiag(int arr[SZ][SZ], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i][i];
  }
  return sum;
}

int main() {
  short n, m;
  int arr1[SZ][SZ], arr2[SZ][SZ];

  cin >> n;
  readArray(arr1, n, n);
  cin >> m;
  readArray(arr2, m, m);

  int trace1 = sumMainDiag(arr1, n);
  int trace2 = sumMainDiag(arr2, m);

  cout << (trace1 == trace2 ? "equal" :
           trace1 > trace2 ? "greater" : "less")
       << endl;

  return 0;
}
