#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  cout << ((x > 1 && y < -1) ||
           (x > 2 && y > 0))
       << endl;
  return 0;
}
