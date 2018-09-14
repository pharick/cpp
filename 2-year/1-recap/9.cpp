#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    if (sqrt(i) == trunc(sqrt(i))) {
      cout << i << " ";
    }
  }

  cout << endl;
  return 0;
}