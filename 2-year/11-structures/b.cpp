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
  int n;
  double sum = 0;
  Point A, B;
  cin >> n;

  cin >> B.x >> B.y;

  for (int i = 0; i < n - 1; i++)
  {
    A = B;
    cin >> B.x >> B.y;
    sum += distance_ptr(&A, &B);
  }

  cout << fixed << setprecision(6) << sum << endl;

  return 0;
}