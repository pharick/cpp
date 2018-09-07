#include <iostream>
using namespace std;

int* toDigits(int n) {
  int size = 0;
  int tmp = n;
  do {
    size++;
    tmp /= 10;
  } while (tmp);

  int *newArr = new int [size + 1];

  int i = size - 1;
  do {
    newArr[i] = n % 10;
    n /= 10;
    i--;
  } while (n);

  newArr[size] = -1;
  return newArr;
}

void printArray(int arr[], int n) {
  int i = 0;
  while (arr[i] != -1) {
    cout << arr[i] << endl;
    i++;
  }
}

int main() {
  int n;
  cin >> n;

  int *arr = toDigits(n);
  printArray(arr, n);

  delete [] arr;
  return 0;
}
