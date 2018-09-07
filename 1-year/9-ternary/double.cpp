#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int max = a;
  max = (b > max) ? b : max;
  max = (c > max) ? c : max;

  cout << ((max == a && max >= (b + c)*2) ? "YES" :
           (max == b && max >= (a + c)*2) ? "YES" :
           (max == c && max >= (a + b)*2) ? "YES" :
           "NO") << endl;

  return 0;
}
