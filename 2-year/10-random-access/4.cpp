#include <fstream>

using namespace std;

int main()
{
  ifstream in("in.txt");
  ofstream out("out.txt");

  in.seekg(0, ios::end);
  int length = in.tellg();

  char s;

  if (length == 1)
  {
    in.seekg(0, ios::beg);
    in.get(s);
    out << s;
  }
  else
  {
    for (int i = 0; i < length / 2; i++)
    {
      in.seekg(i, ios::beg);
      in.get(s);
      out << s;

      in.seekg((i + 1) * -1, ios::end);
      in.get(s);
      out << s;
    }

    if (length % 2 != 0)
    {
      in.seekg(-2, ios::cur);
      in.get(s);
      out << s;
    }
  }

  in.close();
  return 0;
}