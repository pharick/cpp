#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypot(int a, int b) {
  return sqrt(a*a + b*b);
}

int main() {
  int ab, ac, cd;
  cin >> ab >> ac >> cd;

  double bc = hypot(ab, ac);
  double bd = hypot (bc, cd);

  cout << fixed << setprecision(6)
       << ab + ac + cd + bd
       << endl;
  return 0;
}
