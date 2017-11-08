#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  cout << ((x >= -5 && x <= 1) ||
           (x >= 7 && x <= 13))
       << endl;
  return 0;
}
