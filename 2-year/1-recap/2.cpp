#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;
  
  cout << n % 10 * 100 + n / 10 << endl;
  return 0;
}