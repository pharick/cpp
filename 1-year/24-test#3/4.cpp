#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  short sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  cout << (n == sum ? "YES" : "NO") << endl;
  return 0;
}
