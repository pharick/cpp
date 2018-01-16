#include <iostream>
using namespace std;

int main() {
  unsigned int n, result = 0;
  cin >> n;

  do {
    short int d = n % 10;
    result = result * 10 + d;
    n /= 10;
  } while (n);

  cout << result << endl;
  return 0;
}
