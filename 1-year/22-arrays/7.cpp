#include <iostream>
using namespace std;

int main() {
  short arr[100];
  short n, k;

  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k;

  cout << (arr[k-1] % 2 == 0 ? "YES" : "NO") << endl;
  return 0;
}
