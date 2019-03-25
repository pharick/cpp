#include <iostream>

class Rectangle {
protected:
  int w, h;
public:
  Rectangle(int w = 0, int h = 0): w(w), h(h) {}

  int width() { return w; }
  int height() { return h; }

  double area() { return w * h; }
  double perimetr() { return (w + h) * 2; }

  friend std::istream& operator >> (std::istream&, Rectangle&);
  friend std::ostream& operator << (std::ostream&, const Rectangle&);
};

std::istream& operator >> (std::istream& in, Rectangle& rect) {
  std::cin >> rect.w >> rect.h;
  return in;
}

std::ostream& operator << (std::ostream& out, const Rectangle& rect) {
  std::cout << rect.w << " " << rect.h;
  return out;
}

int main() {
  Rectangle rect;
  std::cin >> rect;
  std::cout << rect.area() << " " << rect.perimetr() << std::endl;
  return 0;
}