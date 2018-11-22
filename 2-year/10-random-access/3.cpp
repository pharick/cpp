#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream in("middle.txt");

  in.seekg(0, ios::end);
  int length = in.tellg();

  char s;
  if (length % 2 == 0)
  {
    in.seekg(length / 2 - 1, ios::beg);
    in.get(s);
    cout << s << " ";
    in.get(s);
    cout << s;
  }
  else
  {
    in.seekg(length / 2, ios::beg);
    in.get(s);
    cout << s;
  }

  cout << endl;
  in.close();
  return 0;
}