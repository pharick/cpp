#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  float arr[100];
  int n;
  cin >> n;

  for (short i = 0; i < n; i++) {
    cin >> arr[i];
    cout << fixed << setprecision(6)
         << (arr[i] > 10 ? sqrt(arr[i]) : arr[i]) << " ";
  }

  cout << endl;
  return 0;
}
