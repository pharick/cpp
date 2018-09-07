#include <iostream>
using namespace std;

void digitCount(int k, int* c) {
  *c = 0;
  while (k) {
    (*c)++;
    k /= 10;
  }
}

int main() {
  int k, c;
  for (short i = 0; i < 5; i++) {
    cin >> k;
    digitCount(k, &c);
    cout << c << endl;;
  }

  return 0;
}
