#include <iostream>
using namespace std;

int main() {
  short a, b;
  cin >> a >> b;

  for (short i = a; i <= b; i++) {
    short divCount = 0;

    for (short divr = 1; divr <= i; divr++) {
      if (i % divr == 0) {
        divCount++;
      }
    }

    cout << divCount << " ";
  }

  cout << endl;
  return 0;
}
