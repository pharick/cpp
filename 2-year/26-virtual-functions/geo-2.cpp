#include <iostream>
#include <iomanip>
#include <cmath>

class Circle {
protected:
  int r;
public:
  Circle(int r = 0): r(r) {}
  int radius() { return r; }
  double area() { return M_PI * r*r; }
  double perimeter() { return 2 * M_PI * r; }

  friend std::istream& operator >> (std::istream&, Circle&);
  friend std::ostream& operator << (std::ostream&, const Circle&);
};

std::istream& operator >> (std::istream& in, Circle& c) {
  std::cin >> c.r;
  return in;
}

std::ostream& operator << (std::ostream& out, const Circle& c) {
  std::cout << c.r;
  return out;
}

int main() {
  Circle c;
  std::cin >> c;
  std::cout << std::fixed << std::setprecision(6)
            << c.area() << " " << c.perimeter() << std::endl;
  return 0;
}