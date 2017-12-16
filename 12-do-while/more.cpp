#include <iostream>
using namespace std;

int main() {
  short number1, number2, count = 0;
  cin >> number2;

  do {
    number1 = number2;
    cin >> number2;
    if (number1 < number2) {
      count++;
    }
  } while (number2 != 0);

  cout << count << endl;
  return 0;
}
