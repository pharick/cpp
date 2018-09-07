#include <iostream>
using namespace std;

int main() {
  int arr[100] = {}, x;
  short n, p;

  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> x >> p;
  p--;
  
  for (short i = n - 1; i >= p; i--) {
    arr[i + 1] = arr[i];
  }
  arr[p] = x;
  n++;

  for (short i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
