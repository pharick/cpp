#include <iostream>
using namespace std;

int main() {
  unsigned short int olimpRate, mathScore, passMathScore;
  bool isRussianPass;
  cin >> olimpRate >> mathScore >> passMathScore>> isRussianPass;

  if (olimpRate <= 10 || (mathScore >= passMathScore && isRussianPass))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
