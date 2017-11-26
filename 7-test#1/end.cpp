#include <iostream>
using namespace std;

int main() {
  short int n, endTime = 9 * 60;
  cin >> n;

  if (n >= 1) endTime += 45;
  if (n >= 2) endTime += 5 + 45;
  if (n >= 3) endTime += 15 + 45;
  if (n >= 4) endTime += 5 + 45;
  if (n >= 5) endTime += 15 + 45;
  if (n >= 6) endTime += 5 + 45;
  if (n >= 7) endTime += 15 + 45;
  if (n >= 8) endTime += 5 + 45;
  if (n >= 9) endTime += 15 + 45;
  if (n >= 10) endTime += 5 + 45;

  cout << endTime / 60 << ' ' << endTime % 60 << endl;
  return 0;
}
