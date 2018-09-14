#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  cout << (a == b || a == c || b == c ? "YES" : "NO") << endl;
  return 0;
}