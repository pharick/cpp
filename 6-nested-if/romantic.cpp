#include <iostream>
using namespace std;

int main() {
  short int n;
  cin >> n;

  if ((n % 5 == 0 && n % 25 != 0) || n % 100 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
