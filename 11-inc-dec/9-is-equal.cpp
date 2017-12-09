#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  bool isEqual = true;
  while (n2 >= 0) {
    if (n1 != n2) {
      isEqual = false;
      break;
    }
    n1 = n2;
    cin >> n2;
  }

  cout << (isEqual ? "YES" : "NO") << endl;
  return 0;
}
