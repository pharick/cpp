#include <iostream>
using namespace std;

int main() {
  short n, a;
  cin >> n;

  for (; n > 0; n--) {
    cin >> a;
    for (; a > 0; a--) {
      cout << "@";
    }
    cout << endl;
  }

  return 0;
}
