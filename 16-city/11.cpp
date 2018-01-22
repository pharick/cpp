#include <iostream>
using namespace std;

int main() {
  short n, m1, m2;
  bool equal = true;
  cin >> n;
  cin >> m2;
  n--;

  while (n > 0) {
    m1 = m2;
    cin >> m2;

    if (m1 != m2) {
      equal = false;
      break;
    }

    n--;
  }

  cout << (equal ? "YES" : "NO") << endl;
  return 0;
}
