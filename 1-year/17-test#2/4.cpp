#include <iostream>
using namespace std;

int main() {
  short n, o = 0, r = 0;
  cin >> n;

  bool m;
  while (n) {
    cin >> m;
    if (m) r++;
    else o++;
    n--;
  }

  cout << (o < r ? o : r) << endl;
  return 0;
}
