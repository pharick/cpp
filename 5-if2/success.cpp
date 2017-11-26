#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if ( (a / 1000 != 0) && (a /10000 == 0) && (a % 5 == 0) ) {
    cout << "SUCCESS";
  } else {
    cout << "FAILURE";
  }
  cout << endl;
  return 0;
}
