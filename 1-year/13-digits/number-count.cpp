#include <iostream>
using namespace std;

int main() {
  unsigned int n, k, count = 0;
  cin >> n >> k;

  do {
    if (n % 10 == k) count++;

    n /= 10;
  } while (n);

  cout << count << endl;
  return 0;
}
