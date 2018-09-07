#include <iostream>
using namespace std;

int main() {
  int i = 0, side;

  while (i < 10) {
    cin >> side;
    cout << side*side << " "
         << side*4 << endl;

    i++;
  }

  return 0;
}
