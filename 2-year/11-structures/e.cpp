#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point
{
  double x;
  double y;
};

struct Rectangle
{
  Point p1;
  Point p2;
};

double max(double a, double b) {
  return a > b ? a : b;
}

double min(double a, double b) {
  return a < b ? a : b;
}

void normalize_rect(Rectangle *r) {
  Point pmin, pmax;
  pmin.x = min(r->p1.x, r->p2.x);
  pmin.y = min(r->p1.y, r->p2.y);
  pmax.x = max(r->p1.x, r->p2.x);
  pmax.y = max(r->p1.y, r->p2.y);
  r->p1 = pmin;
  r->p2 = pmax;
}

Rectangle intersec(Rectangle *r1, Rectangle *r2)
{
  Rectangle inter = {};

  inter.p1.x = max(r1->p1.x, r2->p1.x);
  inter.p1.y = max(r1->p1.y, r2->p1.y);
  inter.p2.x = min(r1->p2.x, r2->p2.x);
  inter.p2.y = min(r1->p2.y, r2->p2.y);

  return inter;
}

double rectangle_square(Rectangle *rect)
{
  return abs((rect->p1.x - rect->p2.x) * (rect->p1.y - rect->p2.y));
}

int main()
{
  Rectangle r1, r2;
  cin >> r1.p1.x >> r1.p1.y >> r1.p2.x >> r1.p2.y >> r2.p1.x >> r2.p1.y >> r2.p2.x >> r2.p2.y;
  normalize_rect(&r1);
  normalize_rect(&r2);

  Rectangle inter = intersec(&r1, &r2);
  if (inter.p1.x > inter.p2.x || inter.p1.y > inter.p2.y) {
    cout << fixed << setprecision(6) << 0.0 << endl;
  } else {
    cout << fixed << setprecision(6) << rectangle_square(&inter) << endl;
  }
}