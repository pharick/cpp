#include <fstream>
#include <cstring>

struct Cat {
  char name[51];
  char surname[51];
  char morning_meal[51];
  char evening_meal[51];
};

int main() {
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");

  int n;
  in >> n;

  Cat *cats = new Cat[n];
  for (int i = 0; i < n; i++) {
    in >> cats[i].name >> cats[i].surname >> cats[i].morning_meal;
    out << cats[i].name << " " << cats[i].surname << std::endl
        << "morning: " << cats[i].morning_meal << std::endl
        << "evening: " << (!strcmp(cats[i].morning_meal, "fish") ? "whiskas" : "fish")
        << std::endl;
  }

  delete [] cats;
  in.close();
  out.close();
  return 0;
}