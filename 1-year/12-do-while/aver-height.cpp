#include <iostream>
using namespace std;

int main() {
  short number,
        sumMale = 0,
        sumFemale = 0,
        countMale = 0,
        countFemale = 0,
        height;

  cin >> number;
  for (short i = 0; i < number; i++) {
    cin >> height;
    if (height < 0) {
      sumMale -= height;
      countMale++;
    } else {
      sumFemale += height;
      countFemale++;
    }
  }

  cout << sumMale / countMale << " "
       << sumFemale / countFemale
       << endl;
  return 0;
}
