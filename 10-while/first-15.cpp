#include <iostream>
using namespace std;

int main() {
  int d, l;
  cin >> d >> l;

  int i = l;
  int n = 0;
  while (n < 15) {
    if (i % d == 0) {
      cout << i << " ";
      n++;
    }
    i++;
  }

  return 0;
}
