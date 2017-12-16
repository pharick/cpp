#include <iostream>
using namespace std;

int main() {
  short number, height;
  cin >> number;
  cin >> height;

  short min = height, max = height;
  for (short i = 1; i < number; i++) {
    cin >> height;
    if (height < min) min = height;
    if (height > max) max = height;
  }

  cout << max - min << endl;
  return 0;
}
