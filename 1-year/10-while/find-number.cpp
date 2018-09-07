#include <iostream>
using namespace std;

int main() {
  int i;
  cin >> i;

  i++;
  while (i % 19 != 0) {
    i++;
  }

  cout << i << endl;
  return 0;
}
