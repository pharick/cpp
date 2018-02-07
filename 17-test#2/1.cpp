#include <iostream>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (short i = 1; i <= 20; i++) {
    cout << i << " " << i * n << endl;
  }

  return 0;
}
