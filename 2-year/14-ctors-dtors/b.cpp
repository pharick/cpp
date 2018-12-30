#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

struct Point
{
  int x;
  int y;
};

class Line {
private:
  int n;
  Point *pts;
public:
  Line(Point a, Point b);
  Line(Point a, Point b, Point c);
  Line(int n, Point *pts);
  ~Line();
  void add_point(Point p);
  double get_length();
  void print();
};

Line::Line(Point a, Point b) {
  this->n = 2;
  this->pts = new Point[2];
  this->pts[0] = a;
  this->pts[1] = b;
}

Line::Line(Point a, Point b, Point c) {
  this->n = 3;
  this->pts = new Point[3];
  this->pts[0] = a;
  this->pts[1] = b;
  this->pts[2] = c;
}

Line::Line(int n, Point *pts) {
  this->n = n;
  this->pts = new Point[n];
  for (int i = 0; i < n; i++) {
    this->pts[i] = pts[i];
  }
}

Line::~Line() {
  delete [] this->pts;
}

void Line::add_point(Point p) {
  Point *new_pts = new Point[this->n + 1];
  for (int i = 0; i < n; i++) {
    new_pts[i] = this->pts[i];
  }
  new_pts[n] = p;
  delete [] this->pts;
  this->pts = new_pts;
  this->n++;
}

double Line::get_length() {
  double length = 0;
  for (int i = 0; i < n - 1; i++) {
    length += std::sqrt(pow(this->pts[i].x - this->pts[i + 1].x, 2) + std::pow(this->pts[i].y - this->pts[i + 1].y, 2));
  }
  return length;
}

void Line::print() {
  for (int i = 0; i < this->n; i++) {
    std::cout << "(" << this->pts[i].x << ", " << this->pts[i].y << ") ";
  }
  std::cout << std::endl;
}

int main() {
  int n;
  std::cin >> n;

  Point *pts = new Point[n];
  for (int i = 0; i < n; i++) {
    std::cin >> pts[i].x >> pts[i].y;
  }

  Line line(n, pts);

  int m;
  std::cin >> m;

  for (int i = 0; i < m; i++) {
    char command[9] = {};
    std::cin >> command;

    if (!strcmp(command, "AddPoint")) {
      int x, y;
      std::cin >> x >> y;
      line.add_point({x, y});
    } else if (!strcmp(command, "Print")) {
      line.print();
    } else if (!strcmp(command, "Length")) {
      std::cout << std::fixed << std::setprecision(2)
                << line.get_length() << std::endl;
    }
  }

  return 0;
}