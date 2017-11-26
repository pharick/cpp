#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  t = t % 6;

  switch (t) {
    case 0:
    case 1:
    case 2:
      cout << "GREEN"; break;
    case 3:
      cout << "YELLOW"; break;
    case 4:
    case 5:
      cout << "RED"; break;
  }

  return 0;
}
