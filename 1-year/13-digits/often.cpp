#include <iostream>
using namespace std;

int main() {
  unsigned int n, zero = 0, nine = 0;
  cin >> n;

  do {
    if (n % 10 == 0) zero++;
    if (n % 10 == 9) nine++;

    n /= 10;
  } while (n);

  cout << (zero > nine ? 0 : 9) << endl;
  return 0;
}
