#include <iostream>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  cout << (n*m >= k && (k % n == 0 || k % m == 0) ? "YES" : "NO")
       << endl;

  return 0;
}
