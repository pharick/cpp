#include <iostream>
using namespace std;

int main() {
  short x;
  cin >> x;

  for (short i = x; i >= 50; i -= 5) {
    cout << i << endl;
  }

  return 0;
}
