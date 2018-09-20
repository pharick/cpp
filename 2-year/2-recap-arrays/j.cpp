#include <iostream>
using namespace std;

void readArray(short arr[100], short n) {
  for (short i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

int main() {
  short n, arr[100];
  
  cin >> n;
  readArray(arr, n);

  short max;
  short maxNum = 0;
  for (short i = 0; i < n; i++) {
    short num = 0;

    for (short j = 0; j < n; j++) {
      if (arr[j] == arr[i]) num++;
    }

    if (num > maxNum) {
      max = arr[i];
      maxNum = num;
    }
  }

  cout << max << endl;
  return 0;
}