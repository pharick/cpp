#include <iostream>
#include <iomanip>
using namespace std;

double pow(double x, int p) {
  if (p == 0) return 1;
  if (p == 1) return x;
  return x * pow(x, p - 1);
}

int main() {
  double x;
  int p;
  cin >> x >> p;

  cout << fixed << setprecision(6)
       << pow(x, p) << endl;
  return 0;
}