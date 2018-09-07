#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  if (a + b == -2) cout << "NO SOLUTION";
  else cout << fixed << setprecision(5)
            << 1 / (1 + (a + b) / 2) << endl;
  return 0;
}
