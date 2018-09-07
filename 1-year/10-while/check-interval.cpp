#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int i = a;
  while (i <= b) {
    if (i % c == 0) cout << i << " ";
    i++;
  }

  cout << endl;
  return 0;
}
