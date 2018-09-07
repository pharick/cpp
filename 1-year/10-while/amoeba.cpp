#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 3;
  int result = 1;
  while (i <= n) {
    result *= 2;
    i += 3;
  }

  cout << result << endl;
  return 0;
}
