#include <iostream>
using namespace std;

int main() {
  unsigned int number, is3 = false;
  cin >> number;

  do {
    if (number % 10 == 3) {
      is3 = true;
      break;
    }

    number /= 10;
  } while (number);

  cout << (is3 ? "YES" : "NO") << endl;
  return 0;
}
