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

double rectangle_perimetr(Rectangle *rect)
{
  return (abs(rect->p1.x - rect->p2.x) + abs(rect->p1.y - rect->p2.y)) * 2;
}

int main()
{
  Rectangle rect;
  cin >> rect.p1.x >> rect.p1.y >> rect.p2.x >> rect.p2.y;

  cout << fixed << setprecision(6)
       << rectangle_square(&rect) << endl
       << rectangle_perimetr(&rect) << endl;
  return 0;
}