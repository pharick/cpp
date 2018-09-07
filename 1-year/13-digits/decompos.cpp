#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;

  do {
    cout << number % 10 << " ";
    number /= 10;
  } while (number);

  cout << endl;
  return 0;
}
