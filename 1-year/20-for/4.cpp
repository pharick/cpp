#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  double sum = 1;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    sum += 1.0 / i;
  }

  cout << fixed << setprecision(6)
       << sum << endl;
  return 0;
}
