#include <iostream>
using namespace std;

int main() {
  short arr[7];
  int n;
  cin >> n;

  for (short i = 0; i < 7; i++) {
    arr[i] = n % 10;
    if (n) cout << arr[i] << " ";
    n /= 10;
  }

  cout << endl;
  return 0;
}
