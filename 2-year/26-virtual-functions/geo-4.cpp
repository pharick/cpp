#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

class Figure {
public:
  virtual double area() = 0;
  virtual double perimetr() = 0;
  virtual void draw() = 0;
};

class Rectangle: public Figure {
protected:
  int w, h;
public:
  Rectangle(int w = 0, int h = 0): w(w), h(h) {}
  int width() { return w; }
  int height() { return h; }
  double area() { return w * h; }
  double perimetr() { return (w + h) * 2; }
  void draw();
};

void Rectangle::draw() {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      std::cout << '#';
    }
    std::cout << std::endl;
  }
}

class Circle: public Figure {
protected:
  int r;
public:
  Circle(int r = 0): r(r) {}
  int radius() { return r; }
  double area() { return M_PI * r*r; }
  double perimetr() { return 2 * M_PI * r; }
  void draw();
};

void Circle::draw() {
  int n = 2*r + 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((j - r)*(j - r) + (i - r)*(i - r) <= r*r) {
        std::cout << '#';
      } else {
        std::cout << '.';
      }
    }
    std::cout << std::endl;
  }
}

void draw_array(Figure** array, int n) {
  for (int i = 0; i < n; i++) {
    array[i]->draw();
    std::cout << std::endl;
  }
}

int main() {
  int n;
  std::cin >> n;

  Figure* figures[10000] = {};

  double area = 0, perimetr = 0;

  for (int i = 0; i < n; i++) {
    char type[10] = {};
    std::cin >> type;

    if (!strcmp(type, "Rectangle")) {
      int w, h;
      std::cin >> w >> h;
      figures[i] = new Rectangle(w, h);
    } else if (!strcmp(type, "Circle")) {
      int r;
      std::cin >> r;
      figures[i] = new Circle(r);
    }
  }

  draw_array(figures, n);

  return 0;
}