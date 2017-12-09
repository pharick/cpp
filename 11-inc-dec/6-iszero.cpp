#include <iostream>
using namespace std;

int main() {
  short n, num;
  cin >> n;

  bool isZero = false;
  while (n > 0) {
    cin >> num;
    if (num == 0) {
      isZero = true;
      break;
    }
    n--;
  }

  cout << (isZero ? "YES" : "NO") << endl;
  return 0;
}
