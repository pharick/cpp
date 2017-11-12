#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n <= 6) cout << "BABY";
  else if (n <= 17) cout << "SCHOOLCHILD";
  else if (n <= 64) cout << "ADULT";
  else if (n <= 120) cout << "ELDER";
  else cout << "GHOST";

  cout << endl;
  return 0;
}
