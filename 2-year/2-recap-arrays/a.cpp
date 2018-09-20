#include <iostream>
using namespace std;

int main() {
  short n, k, s, arr[100];
  
  cin >> n;
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> k >> s;
  
  cout << (arr[k - 1] >= arr[s - 1] ? "YES" : "NO") << endl;
  return 0;
}