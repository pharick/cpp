#include <iostream>
using namespace std;

int main() {
  unsigned int number, amount = 0;
  cin >> number;

  do {
    amount++;
    number /= 10;
  } while (number);

  cout << amount << endl;
  return 0;
}
