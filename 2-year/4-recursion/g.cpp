#include <iostream>
#include <cmath>
using namespace std;

void binary(long n) {
  if (n == 0) {
    cout << 0;
    return;
  }

  if (n == 1) {
    cout << 1;
    return;
  }

  binary (n / 2);
  cout << n % 2;
}

int main() {
  long n;
  cin >> n;

  binary(n);
  cout << endl;
  return 0;
}