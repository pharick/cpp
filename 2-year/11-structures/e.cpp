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

double rectangle_square(Rectangle *rect)
{
  return abs((rect->p1.x - rect->p2.x) * (rect->p1.y - rect->p2.y));
}

bool point_in_rectangle(Point *p, Rectangle *r)
{
  return (p->x > r->p1.x && p->x < r->p2.x &&
          p->y > r->p1.y && p->y < r->p2.y) ||
         (p->x < r->p1.x && p->x > r->p2.x &&
          p->y < r->p1.y && p->y > r->p2.y) ||
         (p->x < r->p1.x && p->x > r->p2.x &&
          p->y > r->p1.y && p->y < r->p2.y) ||
         (p->x > r->p1.x && p->x < r->p2.x &&
          p->y < r->p1.y && p->y > r->p2.y);
}

Rectangle intersec(Rectangle *r1, Rectangle *r2)
{
  Rectangle inter = {};

  if (point_in_rectangle(&r1->p2, r2))
  {
    inter.p1 = r2->p1;
    inter.p2 = r1->p2;
  }
  else if (point_in_rectangle(&r1->p1, r2))
  {
    inter.p1 = r2->p2;
    inter.p2 = r1->p1;
  }

  return inter;
}

int main()
{
  Rectangle r1, r2;
  cin >> r1.p1.x >> r1.p1.y >> r1.p2.x >> r1.p2.y >> r2.p1.x >> r2.p1.y >> r2.p2.x >> r2.p2.y;

  Rectangle inter = intersec(&r1, &r2);
  cout << fixed << setprecision(6) << rectangle_square(&inter) << endl;
}