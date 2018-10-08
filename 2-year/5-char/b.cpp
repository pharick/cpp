#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  char letter = 'A';

  for (short i = 0; i < n; i++) {
    for (short j = 0; j <= i; j++) {
      cout << letter;
    }
    cout << endl;
    letter++;
  }

  return 0;
}