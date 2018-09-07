#include <iostream>
using namespace std;

int main() {
  short n;
  int arr[100] = {};

  cin >> n;
  int sum = 0;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  cout << (sum > 0 ? "YES" : "NO") << endl;
  return 0;
}
