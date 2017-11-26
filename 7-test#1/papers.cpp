#include <iostream>
using namespace std;

int main() {
  short int a, b, c;
  cin >> a >> b >> c;

  short int num = 1;
  if (b > a && b > c) num = 2;
  if (c > a && c > b) num = 3;

  cout << num << endl;
  return 0;
}
