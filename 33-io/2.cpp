#include <cstdio>
using namespace std;

int main() {
  int a, b;
  scanf("%d\n%d", &a, &b);
  printf("%06d\n+\n%06d\n=\n%06d\n", a, b, a + b);
}