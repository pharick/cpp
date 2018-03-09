#include <iostream>
using namespace std;

int main() {
  int arr[7], a, z;
  cin >> a >> z;

  int val = a;
  for (short i = 0; i < 7; i++) {
    arr[i] = val;
    cout << arr[i] << " ";
    val *= z;
  }

  cout << endl;
  return 0;
}
