#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int ab = abs(b - a);
  int bc = abs(c - b);
  
  cout << ab << " " << bc << " " << ab + bc << endl;
  return 0;
}