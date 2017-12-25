#include <iostream>
using namespace std;

int main() {
  int number, card, sum = 1;
  cin >> number;

  for (int i = 2; i <= number; i++) {
    sum += i;
    cin >> card;
    sum -= card;
  }

  cout << sum << endl;
  return 0;
}
