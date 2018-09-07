#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a, b, sum = 0;
  double count = 0;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    sum += i;
    count++;
  }

  cout << fixed << setprecision(6)
       << sum / count << endl;
  return 0;
}
