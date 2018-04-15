#include <iostream>
using namespace std;

int digitSum(int k) {
  int sum = 0;
  while (k) {
    sum += k % 10;
    k /= 10;
  }
  return sum;
}

int main() {
  int number, sum = 0;
  for (short i = 0; i < 5; i++) {
    cin >> number;
    sum += digitSum(number);
  }

  cout << sum << endl;
  return 0;
}
