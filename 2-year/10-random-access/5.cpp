#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ofstream out("output.txt");

  int n, k;
  cin >> n >> k;

  char board[100000] = {};

  for (int i = 0; i < n; i++)
  {
    out << " ";
  }

  int p;
  char w[1000];

  for (int i = 0; i < k; i++)
  {
    cin >> p >> w;
    out.seekp(p);
    out << w;
  }

  out.close();
  return 0;
}