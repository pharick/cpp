#include <iostream>
using namespace std;

int main() {
  short a, b;
  cin >> a >> b;

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  short i = a;
  while (i <= b) {
    cout << i << endl;
    i++;
  }

  return 0;
}
