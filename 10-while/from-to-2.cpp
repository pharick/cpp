#include <iostream>
using namespace std;

int main() {
  short a, b, i;
  cin >> a >> b;

  if (a < b) {
    i = a;
    while (i <= b) {
      cout << i << endl;
      i++;
    }
  } else {
    i = a;
    while (i >= b) {
      cout << i << endl;
      i--;
    }
  }

  return 0;
}
