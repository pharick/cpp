#include <iostream>
using namespace std;

int main() {
  short x, z;
  cin >> x >> z;

  for (int i = x; i <= z; i++)
    cout << "I want this set with " << i << " soldiers!" << endl;

  return 0;
}
