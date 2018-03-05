#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;

  for (int number = pow(10, n - 1); number < pow(10, n); number++) {
    int right = 0;
    for (int decon = number; decon > 0; decon /= 10) {
      right += pow(decon % 10, n);
    }

    if (right == number) {
      cout << number << endl;
    }
  }

  return 0;
}
