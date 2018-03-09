#include <iostream>
using namespace std;

int main() {
  int arr[1000000] = {};

  cin >> arr[0];
  long long int sum = 0;
  long long int i;
  for (i = 0; arr[i] != 0; i++) {
    sum += arr[i];
    cin >> arr[i+1];
  }

  long long int aver = sum / i;

  int num = 0;
  for (int j = 0; j < i; j++) {
    if (arr[j] > aver) num++;
  }
  cout << num << endl;

  for (int j = 0; j < i; j++) {
    if (arr[j] > aver) cout << arr[j] << " ";
  }

  cout << endl;
  return 0;
}
