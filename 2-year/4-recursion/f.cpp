#include <iostream>
#include <iomanip>
using namespace std;

double is_simple(int n, int i = 2) {
  if (n < 2) return false;
  else if (n == 2) return true;
  else if (n % i == 0) return false;
  else if (i < n / 2) return is_simple(n, i + 1);
  else return true;
}

int main() {
  int n;
  cin >> n;

  cout << (is_simple(n) ? "YES" : "NO") << endl;
  return 0;
}