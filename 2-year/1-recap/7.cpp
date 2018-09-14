#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double w1, h1, w2, h2;
  cin >> w1 >> h1 >> w2 >> h2;

  cout << ((w1 < w2 && h1 < h2) || (w1 < h2 && h1 < w2) ? "YES" : "NO") << endl;
  return 0;
}