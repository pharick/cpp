#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double r;
  cin >> r;
  cout << fixed << setprecision(6)
       << 3.14 * r*r << endl;
  return 0;
}
