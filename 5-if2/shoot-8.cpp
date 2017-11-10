#include <iostream>
using namespace std;

int main() {
  long long int x, y;
  cin >> x >> y;
  unsigned int circle = x*x + y*y;
  cout << ((y > x*x - 6 && circle < 16) ||
          (circle < 16 && x > 0) ||
          (y > x*x - 6 && y < 0))
       << endl;
  return 0;
}
