#include <iostream>
using namespace std;

int main() {
  short n, arr[100] = {};
  cin >> n;

  int sum = 0, compos = 1;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
    compos *= arr[i];
  }

  cout << sum << " " << compos << endl;
  return 0;
}
