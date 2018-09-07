#include <iostream>
using namespace std;

int main() {
  short height1, height2;
  cin >> height1 >> height2;

  bool result = true;
  while (height2 != -1) {
    if (height1 <= height2) {
      result = false;
      break;
    }
    height1 = height2;
    cin >> height2;
  }

  cout << (result ? "YES" : "NO") << endl;
  return 0;
}
