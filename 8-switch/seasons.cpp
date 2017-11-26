#include <iostream>
using namespace std;

int main() {
  short int m;
  cin >> m;

  switch (m) {
    case 1:
    case 2:
    case 12:
      cout << "WINTER"; break;
    case 3:
    case 4:
    case 5:
      cout << "SPRING"; break;
    case 6:
    case 7:
    case 8:
      cout << "SUMMER"; break;
    case 9:
    case 10:
    case 11:
      cout << "AUTUMN"; break;
    default: cout << "ERROR";
  }

  return 0;
}
