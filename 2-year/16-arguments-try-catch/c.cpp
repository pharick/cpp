#include <fstream>
#include <cstring>

struct Master {
  char name[51];
  char patronymic[51];
  char surname[51];
  int age;
  int cats_number;
};

struct Cat {
  char name[51];
  int age;
  bool abilities;
  char position[51];
  Master master;
};

int main() {
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");

  int n;
  in >> n;

  Cat *cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    in >> cats[i].name >> cats[i].age; 

    char abilities;
    in >> abilities;
    if (abilities == '+') cats[i].abilities = true;
    else cats[i].abilities = false;

    in >> cats[i].position
       >> cats[i].master.name >> cats[i].master.patronymic >> cats[i].master.surname
       >> cats[i].master.age >> cats[i].master.cats_number;

    out << cats[i].position << " " << cats[i].name << " of "
        << cats[i].master.name << " " << cats[i].master.patronymic << " " << cats[i].master.surname
        << std::endl;
  }

  delete [] cats;
  in.close();
  out.close();
  return 0;
}