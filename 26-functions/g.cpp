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

int digitRoot(int n) {
  while (n > 9) {
    n = digitSum(n);
  }
  return n;
}

int main() {
  int n;
  cin >> n;
  cout << digitRoot(n) << endl;
  return 0;
}
