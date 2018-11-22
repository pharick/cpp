#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream in("in.txt");

  int a, b;
  in >> a >> b;

  in.seekg(a + b, ios::beg);
  int n;
  in >> n;

  cout << n << endl;
  in.close();
  return 0;
}