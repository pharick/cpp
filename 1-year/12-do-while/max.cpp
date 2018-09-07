#include <iostream>
using namespace std;

int main() {
  short number, max = 0;

  do {
    cin >> number;
    if (number > max) max = number;
  } while (number != 0);

  cout << max << endl;
  return 0;
}
