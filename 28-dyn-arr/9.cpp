#include <iostream>
using namespace std;

void readArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int* mergeArrays(int* A, int Asize, int* B, int Bsize) {
  int *res = new int [Asize + Bsize];
  int j = 0;

  for (int i = 0; i < Asize; i++) {
    res[j] = A[i];
    j++;
  }

  for (int i = 0; i < Bsize; i++) {
    res[j] = B[i];
    j++;
  }

  return res;
}

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  int *a = new int [n1];
  int *b = new int [n2];

  readArray(a, n1);
  readArray(b, n2);

  int* arr = mergeArrays(a, n1, b, n2);
  printArray(arr, n1 + n2);

  delete [] arr;
  delete [] a;
  delete [] b;
  return 0;
}
