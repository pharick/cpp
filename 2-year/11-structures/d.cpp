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

int main()
{
  Point p;
  Rectangle r;
  cin >> r.p1.x >> r.p1.y >> r.p2.x >> r.p2.y >> p.x >> p.y;

  cout << (point_in_rectangle(&p, &r) ? "YES" : "NO") << endl;
  return 0;
}