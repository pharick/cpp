#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  cout << ((x >= -5 && x <= -3) ||
           (x >= -1 && x <= 1) ||
           (x >= 3 && x <= 5))
       << endl;
  return 0;
}
