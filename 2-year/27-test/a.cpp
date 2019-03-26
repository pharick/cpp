#include <iostream>
#include <cstring>
#include <cmath>

class Binary {
protected:
  bool data[32];
  void fill_zeros();
public:
  Binary();
  Binary(int value);
  Binary(char *s);
  void show() const;
  int to_int() const;

  Binary operator + (const Binary &second);
  Binary operator - (const Binary &second);
  Binary operator * (const Binary &second);
  Binary operator / (const Binary &second);
};

void Binary::fill_zeros() {
  for (int i = 0; i < 32; i++) data[i] = 0;
}

Binary::Binary() {
  fill_zeros();
}

Binary::Binary(int value) {
  fill_zeros();
  int i = 31;
  while (value > 1) {
    data[i] = value % 2;
    value /= 2;
    i--;
  }
  data[i] = value;
}

Binary::Binary(char *s) {
  fill_zeros();
  int j = 31;
  for (int i = strlen(s) - 1; i >= 0; i--) {
    data[j] = s[i] == '1';
    j--;
  }
}

int Binary::to_int() const {
  int n = 0;
  for (int i = 0; i < 32; i++) {
    n += data[i] ? pow(2, 32 - i - 1) : 0;
  }
  return n;
}

void Binary::show() const {
  int start = 0;
  while (data[start] == 0) start++;
  if (start > 31)
    std::cout << 0;
  else
    for (int i = start; i < 32; i++) {
      std::cout << data[i];
    }
}

Binary Binary::operator + (const Binary &second) {
  return Binary(this->to_int() + second.to_int());
}

Binary Binary::operator - (const Binary &second) {
  return Binary(this->to_int() - second.to_int());
}

Binary Binary::operator * (const Binary &second) {
  return Binary(this->to_int() * second.to_int());
}

Binary Binary::operator / (const Binary &second) {
  return Binary(this->to_int() / second.to_int());
}

class BinaryWithOutput: public Binary {
public:
  BinaryWithOutput():Binary() {}

  void increment();

  friend std::istream &operator >> (std::istream& in, BinaryWithOutput& b);
  friend std::ostream &operator << (std::ostream& out, const BinaryWithOutput& b);
};

void BinaryWithOutput::increment() {
  for (int i = 31; i >= 0; i--) {
    if (data[i] == 0) {
      data[i] = 1;
      return;
    } else {
      data[i] = 0;
    }
  }
}

std::istream &operator >> (std::istream& in, BinaryWithOutput& b) {
  char s[33] = {};
  in >> s;
  b.fill_zeros();
  int j = 31;
  for (int i = strlen(s) - 1; i >= 0; i--) {
    b.data[j] = s[i] == '1';
    j--;
  }
  return in;
}

std::ostream &operator << (std::ostream& out, const BinaryWithOutput& b) {
  int start = 0;
  while (b.data[start] == 0) start++;
  if (start > 31)
    out << 0;
  else
    for (int i = start; i < 32; i++) {
      out << b.data[i];
    }
  return out;
}

int main() {
  BinaryWithOutput bin;
  std::cin >> bin;
  bin.increment();
  std::cout << bin << std::endl;
  return 0;
}