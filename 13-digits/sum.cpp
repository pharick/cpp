#include <iostream>
using namespace std;

int main() {
  unsigned int n, sum = 0;
  cin >> n;

  do {
    sum += n % 10;
    n /= 10;
  } while (n);

  cout << sum << endl;
  return 0;
}
