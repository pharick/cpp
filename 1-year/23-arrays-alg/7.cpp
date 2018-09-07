#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  short count = 0;
  cin >> arr[0];
  for (short i = 1; i < n; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0 && arr[i - 1] % 2 == 0) count++;
  }

  cout << count << endl;
  return 0;
}
