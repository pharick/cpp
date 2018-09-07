#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void read_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void count_mods(int arr[], int size, int mods[], int m) {
  for (int i = 0; i < m; i++) {
    int res = 0;
    for (int j = 0; j < size; j++) {
      if (arr[j] % m == i) res++;
    }
    mods[i] = res;
  }
}

void print_mods(int mods[], int m) {
  for (int i = 0; i < m; i++) {
    cout << "Remainder " << i << ": "
         << mods[i] << endl;
  }
}

int main() {
  int arr[100], mods[50], n, m;
  cin >> n;
  read_array(arr, n);
  cin >> m;
  count_mods(arr, n, mods, m);
  print_mods(mods, m);
  return 0;
}
