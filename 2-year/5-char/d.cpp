#include <iostream>
using namespace std;

int main() {
  char s;
  short length = 0;
  
  cin >> s;
  while (s != '.') {
    cin >> s;
    length++;
  }

  cout << length << endl;
  return 0;
}