#include <iostream>
#include <cstring>
#include <cstdlib>

int tokenize(char str[], char tokens[4][4]) {
    char *token = {};
    int i = 0;
    do {
        token = strtok(token ? nullptr : str, ".");
        if (token && strcmp(token, ".")) {
            strncpy(tokens[i], token, 4);
            i++;
        }
    } while (token);
    return i;
}

class IPAddress {
  int data[4];

public:
  IPAddress();
  bool is_valid();

  friend std::ostream &operator << (std::ostream&, const IPAddress&);
  friend std::istream &operator >> (std::istream&, IPAddress&);
};

IPAddress::IPAddress() {
  for (int i = 0; i < 4; i++) {
    this->data[i] = -1;
  }
}

std::ostream &operator << (std::ostream& out, const IPAddress& ip) {
  out << ip.data[0] << "." << ip.data[1] << "." << ip.data[2] << "." << ip.data[3];
  return out;
}

std::istream &operator >> (std::istream& in, IPAddress& ip) {
  char str[16] = {};
  char tokens[4][4] = {};

  std::cin >> str;
  tokenize(str, tokens);

  // std::cout << tokens[0] << " " << tokens[1] << " " << tokens[2] << " " << tokens[3] << std::endl;

  for (int i = 0; i < 4; i++) {
    if (strcmp(tokens[i], "")) ip.data[i] = atoi(tokens[i]);
  }

  return in;
}

bool IPAddress::is_valid() {
  for (int i = 0; i < 4; i++) {
    if (this->data[i] < 0 || this->data[i] > 255) {
      return false;
    }
  }
  return true;
}

int main() {
  IPAddress ip;
  std::cin >> ip;
  std::cout << ip.is_valid() << std::endl;
  return 0;
}