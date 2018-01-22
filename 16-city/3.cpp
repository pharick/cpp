#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (short i = 1; i <= n; i++) {
    if (i % 3 != 0) cout << i << " ";
  }

  cout << endl;
  return 0;
}
