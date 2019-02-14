#include <iostream>

class Fraction {
  long x, y;

public:
  Fraction(long x = 0, long y = 1);

  Fraction operator +(const Fraction&);
  Fraction operator -(const Fraction&);
  Fraction operator *(const Fraction&);
  Fraction operator /(const Fraction&);

  friend Fraction operator *(long a, Fraction b);
  
  friend bool operator <(double a, Fraction b);

  friend std::ostream &operator <<(std::ostream&, const Fraction&);
  friend std::istream &operator >>(std::istream&, Fraction&);
};

Fraction::Fraction(long x, long y): x(x), y(y) {
  if (this->y < 0) {
    this->x *= -1;
    this->y *= -1;
  }
}

Fraction Fraction::operator +(const Fraction &b) {
  return Fraction(this->x * b.y + b.x * this->y, this->y * b.y);
}

Fraction Fraction::operator -(const Fraction &b) {
  return Fraction(this->x * b.y - b.x * this->y, this->y * b.y);
}

Fraction Fraction::operator *(const Fraction &b) {
  return Fraction(this->x * b.x, this->y * b.y);
}

Fraction Fraction::operator /(const Fraction &b) {
  return Fraction(this->x * b.y, this->y * b.x);
}

Fraction operator *(long a, Fraction b) {
  return Fraction(a, 1) * b;
}

bool operator <(double a, Fraction b) {
  return a < b.x * 1.0 / b.y;
}

std::ostream &operator <<(std::ostream &out, const Fraction &f) {
  out << f.x << "/" << f.y;
  return out;
}

std::istream &operator >>(std::istream &in, Fraction &f) {
  in >> f.x;
  in.ignore(1, '/');
  in >> f.y;
  return in;
}

int main() {
  double n;
  Fraction f;
  std::cin >> n >> f;
  std::cout << (n < f ? "YES" : "NO") << std::endl;
  return 0;
}