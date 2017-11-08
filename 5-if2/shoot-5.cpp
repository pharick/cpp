#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  cout << ((x >= -1 && x <= 2 && y >= 3 && y <= 4) ||
          (x >= 1 && x <= 4 && y >= 2 && y <= 7))
       << endl;
  return 0;
}
