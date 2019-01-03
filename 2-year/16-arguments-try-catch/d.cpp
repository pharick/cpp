#include <fstream>
#include <cstring>
#include <cstdlib>

struct Cat {
  char name[51];
  char surname[51];
  char morning[51];
  int cute_grade;
};

int main() {
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");

  int n;
  in >> n;

  Cat *cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    char cat_string[200];
    in >> cat_string;

    strcpy(cats[i].name, strtok(cat_string, ";"));
    strcpy(cats[i].surname, strtok(nullptr, ";"));
    strcpy(cats[i].morning, strtok(nullptr, ";"));  
    cats[i].cute_grade = atol(strtok(nullptr, ";"));

    out << "name: " << cats[i].name << std::endl
        << "surname: " << cats[i].surname << std::endl
        << "morning: " << cats[i].morning << std::endl
        << "cute grade: " << cats[i].cute_grade << std::endl;
  }

  delete [] cats;
  in.close();
  out.close();
  return 0;
}