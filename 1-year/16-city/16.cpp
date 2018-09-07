#include <iostream>
using namespace std;

int main() {
  short l;
  cin >> l;

  long int one = 100000, two = 200000;
  long int sum = 0;
  while (l) {
    long int income = one + two;
    sum += income;
    if (one < two) one = income;
    else two = income;
    l--;
  }

  cout << (one > two ? one : two) << " " << sum << endl;
  return 0;
}
