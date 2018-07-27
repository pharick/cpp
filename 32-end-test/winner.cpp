#include <iostream>
using namespace std;

void readArray(int *A, short Asize) {
  for (int i = 0; i < Asize; i++) {
    cin >> A[i];
  }
}

int findMax(int A[10][10], short An, short Am) {
  int max = 0;
  for (int i = 0; i < An; i++) {
    for (int j = 0; j < Am; j++) {
      if (A[i][j] > max) {
        max = A[i][j];
      }
    }
  }
  return max;
}

bool checkBestThrow(int *A, short Asize, int bestThrow) {
  for (int i = 0; i < Asize; i++) {
    if (A[i] == bestThrow) return true;
  }
  return false;
}

int calcSum(int *A, short Asize) {
  int sum = 0;
  for (int i = 0; i < Asize; i++) {
    sum += A[i];
  }
  return sum;
}

int main() {
  short n, m;
  int A[10][10];
  cin >> n >> m;

  for (short i = 0; i < n; i++) {
    readArray(A[i], m);
  }

  int bestThrow = findMax(A, n, m);
  int bestSum = 0;
  short winner = 0;

  for (short i = 0; i < n; i++) {
    if (checkBestThrow(A[i], m, bestThrow)) {
      int sum = calcSum(A[i], m);
      if (sum > bestSum) {
        bestSum = sum;
        winner = i;
      };
    };
    
    /* cout << "BestThrow: " << checkBestThrow(A[i], m, bestThrow) << endl;
    cout << "BestSum: " << bestSum << " Winner: " << winner << endl; */
  }

  cout << winner << endl;
  return 0;
}