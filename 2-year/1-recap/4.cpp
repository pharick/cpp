#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int res = 0;
  while (n) {
    int dig = n % 10;

    if (dig > 0 && dig % 2 == 0) {
      res++;
    }

    n /= 10;
  }

  cout << res << endl;
  return 0;
}