#include <iostream>
#include <cstring>

class Fraction {
  int a, b;
public:
  Fraction(int a = 0, int b = 1): a(a), b(b) {}
  friend std::istream &operator >> (std::istream&, Fraction&);
  friend std::ostream &operator << (std::ostream&, const Fraction&);
  bool operator > (const Fraction&);
};

std::istream &operator >> (std::istream& in, Fraction& f) {
  in >> f.a;
  in.ignore(1, '/');
  in >> f.b;

  if (f.b < 0) {
    f.a *= -1;
    f.b *= -1;
  }

  return in;
}

std::ostream &operator << (std::ostream& out, const Fraction& f) {
  std::cout << f.a << '/' << f.b;
  return out;
}

bool Fraction::operator >(const Fraction &b) {
  return this->a * b.b > b.a * this->b;
};

template <class T>
T my_max(T a, T b) {
  if (a > b) return a;
  return b;
}

int main() {
  int int_a, int_b;
  Fraction fract_a, fract_b;
  char char_a, char_b;

  char type[9] = {};
  std::cin >> type;

  if (!strcmp(type, "INT")) {
    std::cin >> int_a >> int_b;
    std::cout << my_max(int_a, int_b);
  } else if (!strcmp(type, "FRACTION")) {
    std::cin >> fract_a >> fract_b;
    std::cout << my_max(fract_a, fract_b);
  } else if (!strcmp(type, "CHAR")) {
    std::cin >> char_a >> char_b;
    std::cout << my_max(char_a, char_b);
  }

  std::cout << std::endl;
  return 0;
}