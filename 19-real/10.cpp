#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double h, m, s;
  cin >> h >> m >> s;

  cout << (h + m / 60 + s / 3600) * 30.0 << endl;
  return 0;
}
