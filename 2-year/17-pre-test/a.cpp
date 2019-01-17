#include <fstream>

int main() {
  std::ifstream in("in.txt");
  std::ofstream out("out.txt");

  char symb;

  in.get();
  in.get(symb);
  while (!in.eof()) {
    if (symb == '\n') in.get();
    out << symb;
    in.get(symb);
  }

  out << std::endl;

  in.close();
  out.close();
  return 0;
}