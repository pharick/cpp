#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << ((a % 2 == c % 2 && b % 2 == d % 2) ? "YES" :
           (a % 2 != c % 2 && b % 2 != d % 2) ? "YES" :
           "NO");

  cout << endl;
  return 0;
}
