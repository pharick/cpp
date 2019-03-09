#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
  int a, b;
public:
  Fraction(int a = 0, int b = 1): a(a), b(b) {}
  friend istream &operator >> (istream&, Fraction&);
  friend ostream &operator << (ostream&, const Fraction&);

  Fraction operator + (const Fraction&);
  Fraction operator + (const int&);
  Fraction operator + (const double&);

  friend Fraction operator + (int v, Fraction f);
  friend Fraction operator + (double v, Fraction f);

  Fraction operator * (const Fraction&);
  int get_a() { return a; }
  int get_b() { return b; }
};

istream &operator >> (istream& in, Fraction& f) {
  in >> f.a;
  in.ignore(1, '/');
  in >> f.b;

  if (f.b < 0) {
    f.a *= -1;
    f.b *= -1;
  }

  return in;
}

ostream &operator << (ostream& out, const Fraction& f) {
  cout << f.a << '/' << f.b;
  return out;
}

Fraction Fraction::operator + (const Fraction &b) {
  int new_b = this->b * b.b;
  int new_a = this->a * b.b + b.a * this->b;
  return Fraction(new_a, new_b);
}

Fraction Fraction::operator + (const int& b) {
  int new_b = this->b;
  int new_a = this->a + b * this->b;
  return Fraction(new_a, new_b);
}

Fraction Fraction::operator + (const double& b) {
  int new_b = this->b;
  int new_a = this->a + b * this->b;
  return Fraction(new_a, new_b);
}

Fraction operator + (int n, Fraction f) {
  int new_b = f.b;
  int new_a = f.a + n * f.b;
  return Fraction(new_a, new_b);
}

Fraction operator + (double n, Fraction f) {
  int new_b = f.b;
  int new_a = f.a + n * f.b;
  return Fraction(new_a, new_b);
}

Fraction Fraction::operator * (const Fraction &b) {
  long new_a = this->a * b.a;
  long new_b = this->b * b.b;
  return Fraction(new_a, new_b);
}

template <class T, class U>
class Point {
  T x;
  U y;
public:
  Point(T x = 0, U y = 0): x(x), y(y) {}
  T get_x() { return x; }
  U get_y() { return y; }
  double length();
};

template <class T, class U>
double Point<T, U>::length() {
  return sqrt(x*x + y*y);
}

double sqrt(Fraction a) {
  return sqrt(a.get_a() / a.get_b());
}

int main() {
  int x_int, y_int;
  double x_double, y_double;
  Fraction x_fract, y_fract;

  std::cin >> x_int >> y_int;
  Point<int, int> p_int(x_int, y_int);
  std::cout << p_int.length() << std::endl;

  std::cin >> x_int >> y_double;
  Point<int, double> p_int_double(x_int, y_double);
  std::cout << p_int_double.length() << std::endl;

  std::cin >> x_fract >> y_fract;
  Point<Fraction, Fraction> p_fract(x_fract, y_fract);
  std::cout << p_fract.length() << std::endl;

  return 0;
}