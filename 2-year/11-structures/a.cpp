#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point
{
  double x;
  double y;
};

double distance_ptr(Point *A, Point *B)
{
  return sqrt(pow(A->x - B->x, 2) + pow(A->y - B->y, 2));
}

int main()
{
  Point A, B;
  cin >> A.x >> A.y >> B.x >> B.y;

  cout << fixed << setprecision(6) << distance_ptr(&A, &B) << endl;

  return 0;
}