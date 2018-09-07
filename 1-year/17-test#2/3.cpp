#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int g = n / 2;
  int k = 0;

  while (g >= 0) {
    cout << g << " " << k << endl;
    g -= 2;
    k += 1;
  }

  return 0;
}
