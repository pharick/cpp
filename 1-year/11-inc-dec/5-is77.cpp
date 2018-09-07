#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool is77 = false;
  while (n != 100) {
    if (n == 77) {
      is77 = true;
      break;
    }
    cin >> n;
  }

  cout << (is77 ? "YES" : "NO") << endl;
  return 0;
}
