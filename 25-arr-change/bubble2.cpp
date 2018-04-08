#include <iostream>
using namespace std;

int main() {
  short shoes[1000] = {}, foot, count;

  cin >> foot >> count;
  for (short i = 0; i < count; i++) {
    cin >> shoes[i];
  }

  for (short j = 0; j < count; j++) {
    for (short i = 0; i < count - 1; i++) {
      if (shoes[i] < shoes[i + 1]) {
        short tmp = shoes[i];
        shoes[i] = shoes[i + 1];
        shoes[i + 1] = tmp;
      }
    }
  }

  short result = shoes[0] >= foot ? 1 : 0;
  short lastShoe = shoes[0];
  for (short i = 1; i <= count - 1; i++) {
    if (shoes[i] < foot) break;
    if (lastShoe - shoes[i] >= 3) {
      result++;
      lastShoe = shoes[i];
    }
  }

  cout << result << endl;

  return 0;
}
