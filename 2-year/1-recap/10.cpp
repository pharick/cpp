#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int d, m;
  cin >> d >> m;

  if (d == 1) {
    switch (m) {
      case 3:
        cout << 28;
        break;
      case 5:
      case 7:
      case 10:
      case 12:
        cout << 30;
        break;
      default:
        cout << 31;
    }

    cout << " ";

    if (m == 1) {
      cout << 12;
    } else {
      cout << m - 1;
    }
  } else {
    cout << d - 1 << " " << m;
  }

  cout << endl;
  return 0;
}