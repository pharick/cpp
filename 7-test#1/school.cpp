#include <iostream>
using namespace std;

int main() {
  short int x, y;
  cin >> x >> y;

  if ((x >= 10 && x <= 20 && y >= 5 && y <= 10) ||
     (x >= 5 && x <= 15 && y >= 10 && y <= 15) ||
     (x >= 10 && x <= 20 && y >= 15 && y <= 20)) {
       cout << "YES";
     }
  else cout << "NO";

  cout << endl;
  return 0;
}
