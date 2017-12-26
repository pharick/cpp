#include <iostream>
using namespace std;

int main() {
  unsigned int n, sum1 = 0, sum2 = 0;
  cin >> n;

  short i = 1;
  do {
    if (i <= 3) sum1 += n % 10;
    if (i > 3) sum2 += n % 10;

    i++;
    n /= 10;
  } while (n);

  cout << (sum1 == sum2 ? "YES" : "NO") << endl;
  return 0;
}
