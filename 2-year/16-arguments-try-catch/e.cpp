#include <fstream>
#include <cstring>

struct Cat {
  char name[51];
  char surname[51];
  char morning_meal[51];
  int cute_grade;
};

int main() {
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");

  int n;
  in >> n;

  Cat *cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    in >> cats[i].name >> cats[i].surname >> cats[i].morning_meal >> cats[i].cute_grade;
  }

  for (int grade = 10; grade > 5; grade--) {
    out << "Cute Grade: " << grade << std::endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (cats[i].cute_grade == grade) {
        if (count) out << ", ";
        out << cats[i].name << " " << cats[i].surname;
        count++;
      }
    }
    if (!count) out << "Here is no cats";
    out << std::endl;
  }

  delete [] cats;
  in.close();
  out.close();
  return 0;
}