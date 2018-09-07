#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, d, n;
  cin >> a >> b >> c >> d >> n;

  if (a > b && a > c && a > d) a -= n;
  else if (b > a && b > c && b > d) b -= n;
  else if (c > a && c > b && c > d) c -= n;
  else d -= n;
  cout << a << ' ' << b << ' ' << c << ' ' << d << endl;

  return 0;
}
