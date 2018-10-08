#include <iostream>
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

  short numbers = 0;
  short i = 0;
  while (string[i] != '.') {
    if (string[i] >= 48 && string[i] <= 57) {
      numbers++;
    }
    i++;
  }

  cout << numbers << endl;
  return 0;
}