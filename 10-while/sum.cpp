#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int i = a;
  int sum = 0;
  while (i <= b) {
    sum += i;
    i++;
  }

  cout << sum << endl;
  return 0;
}
