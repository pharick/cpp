#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  cout << ((y > 0.5 && y < 1.5) ||
           (x > 2))
       << endl;
  return 0;
}
