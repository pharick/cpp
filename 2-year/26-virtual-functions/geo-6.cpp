#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

class Figure {
public:
  virtual double area() = 0;
  virtual double perimetr() = 0;
  virtual bool isCircle() = 0;
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
  bool isCircle() { return false; }
};

class HollowRectangle: public Rectangle {
public:
  HollowRectangle(int w, int h): Rectangle(w, h) {}
};

class Circle: public Figure {
protected:
  int r;
public:
  Circle(int r = 0): r(r) {}
  int radius() { return r; }
  double area() { return M_PI * r*r; }
  double perimetr() { return 2 * M_PI * r; }
  bool isCircle() { return true; }
};

class HollowCircle: public Circle {
public:
  HollowCircle(int r): Circle(r) {}
};

int count_rectangles(Figure** array, int n) {
  int result = 0;
  for (int i = 0; i < n; i++)
    if (!array[i]->isCircle()) result++;
  return result;
}

int count_circles(Figure** array, int n) {
  int result = 0;
  for (int i = 0; i < n; i++)
    if (array[i]->isCircle()) result++;
  return result;
}

int main() {
  int n;
  std::cin >> n;

  Figure* figures[10000] = {};

  double area = 0, perimetr = 0;

  for (int i = 0; i < n; i++) {
    char type[16] = {};
    std::cin >> type;

    if (!strcmp(type, "Rectangle")) {
      int w, h;
      std::cin >> w >> h;
      figures[i] = new Rectangle(w, h);
    } else if (!strcmp(type, "Circle")) {
      int r;
      std::cin >> r;
      figures[i] = new Circle(r);
    } else if (!strcmp(type, "HollowRectangle")) {
      int w, h;
      std::cin >> w >> h;
      figures[i] = new HollowRectangle(w, h);
    } else if (!strcmp(type, "HollowCircle")) {
      int r;
      std::cin >> r;
      figures[i] = new HollowCircle(r);
    }
  }

  std::cout << count_rectangles(figures, n) << " "
            << count_circles(figures, n) << " "
            << std::endl;
  return 0;
}