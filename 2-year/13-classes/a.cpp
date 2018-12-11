#include <iostream>
#include <iomanip>

class Student {
  private:
    char name[51];
    char surname[51];
    int hp;
  public:
    void start_game();
    bool is_alive();
    void show();
};

void Student::start_game() {
  std::cin >> this->name >> this->surname;
  this->hp = 100;
}

bool Student::is_alive() {
  return this->hp > 0;
}

void Student::show() {
  std::cout << this->name << " " << this->surname << ": HP = "
            << std::setfill('0') << std::setw(3)
            << this->hp << ".";

  if (this->hp <= 0) {
    std::cout << " Game over.";
  }

std::cout << std::endl;
}

int main() {
  Student student;
  student.start_game();
  student.show();
  return 0;
}