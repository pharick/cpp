#include <iostream>
using namespace std;

int main() {
  short n, k, arr[100], k_num = 0;
  
  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> k;

  for (short i = 0; i < n; i++) {
    if (arr[i] == k) {
      k_num = i + 1;
      break;
    }
  }
  
  cout << k_num << endl;
  return 0;
}