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

  short vowel = 0;
  short i = 0;
  while(string[i] != '.') {
    char letter = tolower(string[i]);
    if (letter == 97  ||
        letter == 101 ||
        letter == 105 ||
        letter == 111 ||
        letter == 117 ||
        letter == 121) {
          vowel++;
        }
    i++;
  }

  cout << vowel << endl;
  return 0;
}