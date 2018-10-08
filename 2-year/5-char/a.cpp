#include <iostream>
using namespace std;

int main() {
  short a, b;
  cin >> a >> b;

  for (short i = a; i <= b; i++) {
    cout << i << ' ' << char(i) << endl;
  }

  return 0;
}