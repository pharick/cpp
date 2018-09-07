#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n > 1) {
    if (n % 5 != 0) break;
    n /= 5;
  }

  cout << (n == 1 ? "YES" : "NO");
  return 0;
}
