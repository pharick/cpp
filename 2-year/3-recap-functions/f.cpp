#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void reduce_fraction(int *n, int *m) {
  for (int i = *n; i > 1; i--) {
    if (*n % i == 0 && *m % i == 0) {
      *n /= i;
      *m /= i;
      break;
    }
  }
}

int main() {
  int a, b;
  cin >> a >> b;

  reduce_fraction(&a, &b);

  cout << a << " " << b << endl;
  return 0;
}