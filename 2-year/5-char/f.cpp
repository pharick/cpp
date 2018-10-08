#include <iostream>
#include <cctype>
using namespace std;

void read_string(char string[255]) {
  short i = 0;
  do {
    cin >> string[i];
    i++;
  } while (string[i - 1] != '.');
}

int main() {
  char string[255];
  read_string(string);

  short letters = 0;
  short i = 0;
  while (string[i] != '.') {
    if (isalpha(string[i])) {
      letters++;
    }
    i++;
  }

  cout << letters << endl;
  return 0;
}