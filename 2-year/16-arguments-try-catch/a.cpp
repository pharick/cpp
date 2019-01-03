#include <fstream>

struct Cat {
  char name[51];
  char surname[51];
};

int main() {
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");

  int n;
  in >> n;

  Cat *cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    in >> cats[i].name >> cats[i].surname;
    out << cats[i].surname << " " << cats[i].name << std::endl;
  }

  delete [] cats;
  in.close();
  out.close();
  return 0;
}