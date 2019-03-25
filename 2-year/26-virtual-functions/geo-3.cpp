#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

class Figure {
public:
  virtual double area() = 0;
  virtual double perimetr() = 0;
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
};

class Circle: public Figure {
protected:
  int r;
public:
  Circle(int r = 0): r(r) {}
  int radius() { return r; }
  double area() { return M_PI * r*r; }
  double perimetr() { return 2 * M_PI * r; }
};

double array_area(Figure** array, int n) {
  double area;
  for (int i = 0; i < n; i++) {
    area += array[i]->area();
  }
  return area;
}

double array_perimeter(Figure** array, int n) {
  double perimetr;
  for (int i = 0; i < n; i++) {
    perimetr += array[i]->perimetr();
  }
  return perimetr;
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

  std::cout << std::fixed<< std::setprecision(6)
            << array_area(figures, n) << " "
            << array_perimeter(figures, n)
            << std::endl;
  return 0;
}