#include <iostream>
using namespace std;

int main() {
  short int n;
  cin >> n;

  while (n > 0) {
    cout << "*";
    n--;
  }

  cout << endl;
  return 0;
}
