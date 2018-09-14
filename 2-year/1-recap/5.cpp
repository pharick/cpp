#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  double res = sqrt(2);

  for (int i = 0; i < n - 1; i++) {
    res = sqrt(2 + res);
  }

  cout << fixed << setprecision(6)
       << res << endl;
  return 0;
}