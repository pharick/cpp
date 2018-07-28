#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n1, d1, n2, d2;
  cin >> n1 >> d1 >> n2 >> d2;

  int nRes = n1 * d2 + n2 * d1;
  int dRes = d1 * d2;

  int intRes = nRes / dRes;
  nRes %= dRes;

  cout << setw(21)
       << nRes << endl
       << setw(10) << intRes << " ----------" << endl
       << setw(21) << dRes << endl;
}