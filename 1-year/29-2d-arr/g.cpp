#include <iostream>
using namespace std;

int main() {
  short n;
  int arr[500][500];

  cin >> n;

  for (short i = 0; i < n; i++)
    for (short j = 0; j < n; j++)
      cin >> arr[i][j];

  for (short i = 0; i < n; i++)
    cout << arr[i][i] << " ";

  cout << endl;
  return 0;
}
