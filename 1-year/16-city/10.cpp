#include <iostream>
using namespace std;

int main() {
  short n, age, edu;
  bool suit = false;
  cin >> n;

  while (n > 0) {
    cin >> age >> edu;
    if (age > 22 && age < 30 && edu >= 5) {
      suit = true;
      break;
    }
    n--;
  }

  cout << (suit ? "YES" : "NO") << endl;
  return 0;
}
