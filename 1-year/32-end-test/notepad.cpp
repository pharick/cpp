#include <iostream>
using namespace std;

void readArray(int *A, int Asize) {
  for (int i = 0; i < Asize; i++) {
    cin >> A[i];
  }
}

void printArray(int *A, int Asize) {
  for (int i = 0; i < Asize; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
}

int* rearrange (int *A, int Asize) {
  int *Anew = new int [100], pos = 0;

  for (int i = 0; i < Asize; i += 2) {
    Anew[pos] = A[i];
    pos++;
  }
  for (int i = 1; i < Asize; i += 2) {
    Anew[pos] = A[i];
    pos++;
  }

  return Anew;
}

int main() {
  int *A = new int [100], Asize, count;

  cin >> Asize;
  readArray(A, Asize);
  cin >> count;

  for (int i = 0; i < count; i++) {
    int *Anew = rearrange(A, Asize);
    printArray(Anew, Asize);
    A = Anew;
  }

  return 0;
}