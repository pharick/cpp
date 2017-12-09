#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int multi = 1;
  while (n != 0) {
    multi *= n;
    cin >> n;
  }

  cout << multi << endl;
  return 0;
}
