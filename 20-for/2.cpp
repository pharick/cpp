#include <iostream>
using namespace std;

int main() {
  short a, b;
  int sum = 0;
  cin >> a >> b;

  for (int i = a; i <= b; i++)
    sum += i*i;

  cout << sum << endl;
  return 0;
}
