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

void print_string_lower(char string[255]) {
  short i = 0;
  while (string[i] != '.') {
    cout << char(tolower(string[i]));
    i++;
  }
  cout << '.';
}

// U??:SQGJZ3:ZVXBXWW_FON!CCQLJRAEW;:QV5Q0KAAGXYIRCEU7MX4,!7590EN9BJ4BRHI12UNGTBH;_;,;:662?L9WOJN,GB?YS8HYVBJYXO!7U:CH3Y:::NOJ9COFVAV9F7G0F7FBJT05I:!2C?WXK5NZDX5KWHYGI5QM!E4XY7DZPRIPDEOHX!LJ7VQ!?Z;QG.

int main() {
  char string[255];

  read_string(string);

  print_string_lower(string);
  cout << endl;
  return 0;
}