#include <iostream>
using namespace std;

int main() {
  short arr[100], n;
  cin >> n;

  for (short i = 0; i < n; i++) {
    arr[i] = n - i;
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
