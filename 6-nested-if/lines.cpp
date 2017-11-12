#include <iostream>
using namespace std;

int main() {
  short int k, n, str, line;
  cin >> k >> n;

  if (n <= k) str = 1;
  else if (n % k == 0) str = n / k;
  else str = n / k + 1;

  if (n <= k) line = n;
  else line = n - (str - 1) * k;

  cout << str << ' '
       << line << endl;

  return 0;
}
