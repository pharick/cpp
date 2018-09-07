#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n == 1) return false;
  
  bool result = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      result = false;
      break;
    }
  }
  return result;
}

int main() {
  int n;
  cin >> n;

  bool result = isPrime(n);
  cout << (result ? "YES" : "NO") << endl;
  return 0;
}
