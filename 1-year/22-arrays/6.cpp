#include <iostream>
using namespace std;

int main() {
  int arr[100];
  short n, k;

  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k;

  for (short i = 0; i < n; i++) {
    if (arr[i] % k == 0) cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
