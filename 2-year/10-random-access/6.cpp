#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ifstream in("road.txt");
  ofstream out("test.txt");

  char s = '_', prev_s;
  bool to_left = false;
  int count = 0;

  do
  {
    prev_s = s;

    if (to_left)
    {
      in.seekg(-2, ios::cur);
    }
    in.get(s);

    out << s << " " << in.tellg() << endl;

    if (s == '>')
    {
      to_left = false;

      if (prev_s == '>')
      {
        in.seekg(10, ios::cur);
      }
    }
    else if (s == '<')
    {
      to_left = true;

      if (prev_s == '<')
      {
        in.seekg(-10, ios::cur);
      }
    }

    count++;
  } while (s != '^');

  cout << in.tellg() << " " << count - 1 << endl;
  in.close();
  out.close();
  return 0;
}