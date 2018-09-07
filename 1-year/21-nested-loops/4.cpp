#include <iostream>
using namespace std;

int main() {
  short l, r;
  cin >> l >> r;

  short divMaxSum = 0, resultNumber;
  for (short i = l; i <= r; i++) {
    short divSum = 0;
    for (short divr = 1; divr <= i; divr++) {
      if (i % divr == 0) {
        divSum += divr;
      }
    }

    if (divSum > divMaxSum) {
      divMaxSum = divSum;
      resultNumber = i;
    }
  }

  cout << resultNumber << endl;
  return 0;
}
