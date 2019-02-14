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
  Fraction a, b, c, d;
  std::cin >> a >> b >> c >> d;
  // std::cout << a << " " << b << " " << c << " " << d << std::endl;
  Fraction res = d * d - (3 * a) / (b * c);
  std::cout << res << std::endl;
  return 0;
}