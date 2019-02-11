#include <iostream>
#include <cstring>
#include <cstdlib>

int tokenize(char str[], char tokens[2][21]) {
    char *token = {};
    int i = 0;
    do {
        token = strtok(token ? nullptr : str, "/");
        if (token && strcmp(token, "/")) {
            strncpy(tokens[i], token, 21);
            i++;
        }
    } while (token);
    return i;
}

class Fraction {
  long x;
  long y;
public:
  Fraction(long x = 0, long y = 1);
  Fraction operator +(const Fraction&);
  Fraction operator +(const int&);
  Fraction operator -(const Fraction&);
  Fraction operator -() { return Fraction(-this->x, this->y); };
  Fraction operator *(const Fraction&);
  Fraction operator /(const Fraction&);
  Fraction operator %(const int&);
  Fraction operator %(const Fraction&);
  bool operator ==(const Fraction&);
  bool operator >(const Fraction&);
  bool operator <(const Fraction&);
  void show() { std::cout << this->x << "/" << this->y << std::endl; }
  void read();
  void reduce();
};

Fraction::Fraction(long x, long y): x(x), y(y) {
  if (this->y < 0) {
    this->x *= -1;
    this->y *= -1;
  }
}

Fraction Fraction::operator +(const Fraction &b) {
  long new_y = this->y * b.y;
  long new_x = this->x * b.y + b.x * this->y;
  return Fraction(new_x, new_y);
}

Fraction Fraction::operator +(const int &b) {
  Fraction b_fract(b, 1);
  long new_y = this->y * b_fract.y;
  long new_x = this->x * b_fract.y + b_fract.x * this->y;
  return Fraction(new_x, new_y);
}

Fraction Fraction::operator -(const Fraction &b) {
  long new_y = this->y * b.y;
  long new_x = this->x * b.y - b.x * this->y;
  return Fraction(new_x, new_y);
}

Fraction Fraction::operator *(const Fraction &b) {
  long new_x = this->x * b.x;
  long new_y = this->y * b.y;
  return Fraction(new_x, new_y);
}

Fraction Fraction::operator /(const Fraction &b) {
  long new_x = this->x * b.y;
  long new_y = this->y * b.x;
  return Fraction(new_x, new_y);
}

Fraction Fraction::operator %(const int &i) {
  return Fraction(this->x % (i * this->y), this->y);
};

Fraction Fraction::operator %(const Fraction &b) {
  return Fraction((this->x * b.y) % (b.x * this->y), this->y * b.y);
};

bool Fraction::operator ==(const Fraction &b) {
  return this->x * 1.0 / b.x == this->y * 1.0 / b.y;
};

bool Fraction::operator >(const Fraction &b) {
  return this->x * b.y > b.x * this->y;
};

bool Fraction::operator <(const Fraction &b) {
  return this->x * b.y < b.x * this->y;
};

void Fraction::read() {
  char str[42] = {};
  char tokens[2][21] = {};
  std::cin >> str;
  tokenize(str, tokens);
  this->x = atol(tokens[0]);
  this->y = atol(tokens[1]);
  if (this->y < 0) {
    this->x *= -1;
    this->y *= -1;
  }
}

int main() {
  int i;
  Fraction f1, f2;
  f1.read();
  f2.read();
  Fraction res = f1 % f2;
  res.show();
  return 0;
}