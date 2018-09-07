#include <iostream>
using namespace std;

int main() {
  short i = 0, n;

  while (i < 10) {
    cin >> n;
    if (n < 0) n *= -1;
    cout << n + 25 << endl;
    i++;
  }

  return 0;
}
