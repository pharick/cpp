#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;
  short min = 9,
        max = 0,
        count = 0;

  int work = number;
  do {
    short digit = work % 10;
    if (digit < min) {
      min = digit;
    }
    if (digit > max) {
      max = digit;
    }

    work /= 10;
    count++;
  } while (work);

  work = number;
  short maxIndex, minCount = 0;
  do {
    short digit = work % 10;
    if (digit == max) maxIndex = count;
    if (digit == min) minCount++;

    work /= 10;
    count--;
  } while (work);

  cout << max << " " << min << endl
       << maxIndex << endl
       << minCount << endl;
  return 0;
}
