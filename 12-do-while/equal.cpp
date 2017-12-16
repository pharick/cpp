#include <iostream>
using namespace std;

int main() {
  short number1, number2;
  cin >> number2;

  bool result = false;
  do {
    number1 = number2;
    cin >> number2;
    if (number1 == number2) {
      result = true;
      break;
    }
  } while (number2 != -1);

  cout << (result ? "YES" : "NO") << endl;
  return 0;
}
