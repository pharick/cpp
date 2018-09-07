#include <iostream>
using namespace std;

int main() {
  short n, m;
  cin >> n >> m;

  for (short i = 0; i < n; i++) {
    for (short j = 0; j < m; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
