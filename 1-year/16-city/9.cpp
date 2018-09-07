#include <iostream>
using namespace std;

int main() {
  short n, k, x, m;
  int sum = 0;
  cin >> n;

  while (n > 0) {
    cin >> k;
    sum += k;
    n--;
  }

  cin >> x >> m;

  while (x > 0) {
    sum *= m;
    x--;
  }

  cout << sum << endl;
  return 0;
}
