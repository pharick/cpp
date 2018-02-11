#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double x;
  cin >> x;

  double price = x * 2.3;
  double discount = price - price / 100 * 20;

  cout << fixed << setprecision(2)
       << discount << endl;
  return 0;
}
