#include <iostream>
using namespace std;

int main() {
  short x;
  int price = 0;
  cin >> x;

  for (short i = 1; i <= x; i++) {
    price += 1 * i;
  }

  cout << price << endl;
  return 0;
}
