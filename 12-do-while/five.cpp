#include <iostream>
using namespace std;

int main() {
  short number, mark, counter = 0;

  cin >> number;
  for (short i = 0; i < number; i++) {
    cin >> mark;
    if (mark == 5) counter++;
  }

  cout << counter << endl;
  return 0;
}
