#include <iostream>
using namespace std;

int main() {
  int i = 1, n, d, result;
  cin >> n >> d;

  while (i <= n) {
    if (i % d == 0) result = i;
    i++;
  }

  cout << result << endl;
  return 0;
}
