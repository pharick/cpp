#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  double sum = 1;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += 1.0 / pow(3, i);
  }

  cout << fixed << setprecision(6)
       << sum << endl;
  return 0;
}
