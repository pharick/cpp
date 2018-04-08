#include <iostream>
using namespace std;

int main() {
  int s;
  cin >> s;

  short number = 1, count = 0;
  while (s > 0) {
    cout << number << " ";
    count++;
    if (count >= number) {
      count = 0;
      number++;
    }
    s--;
  }

  cout << endl;
  return 0;
}
