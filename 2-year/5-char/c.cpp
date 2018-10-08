#include <iostream>
using namespace std;

void read_string(char string[50]) {
  short i = 0;
  do {
    cin >> string[i];
    i++;
  } while (string[i - 1] != '.');
}

void print_string(char string[50]) {
  char i = 0;
  while (string[i] != '.') {
    cout << string[i];
    i++;
  }
}

int main() {
  char username[50];

  read_string(username);

  cout << "Hello, ";
  print_string(username);
  cout << endl;
  return 0;
}