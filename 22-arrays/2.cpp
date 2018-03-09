#include <iostream>
using namespace std;

int main() {
  short arr[10], a, p;
  cin >> a >> p;

  for (short i = 0; i < 10; i++) {
    arr[i] = a + p*i;
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
