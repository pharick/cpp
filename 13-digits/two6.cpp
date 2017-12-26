#include <iostream>
using namespace std;

int main() {
  unsigned int number, six = 0;
  cin >> number;

  do {
    if (number % 10 == 6) six++;
    if (six >= 2) break;

    number /= 10;
  } while (number);

  cout << (six >=2 ? "YES" : "NO") << endl;
  return 0;
}
