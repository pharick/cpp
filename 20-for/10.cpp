#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  int n1 = 1, n2 = 1;
  for (short i = 3; i <= n; i++) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp + n2;
  }

  cout << n2 << endl;
  return 0;
}
