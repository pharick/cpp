#include <iostream>
using namespace std;

int main() {
  int k;
  cin >> k;

  cout << "Mne " << k << " ";

  if (k % 100 >= 10 && k % 100 <= 19) cout << "let";
  else if (k % 10 == 0) cout << "let";
  else if (k % 10 == 1) cout << "god";
  else if (k % 10 >= 2 && k % 10 <= 4) cout << "goda";
  else cout << "let";

  cout << endl;
  return 0;
}
