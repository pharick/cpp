#include <iostream>
#include <iomanip>
#include <cstring>

class Student {
  private:
    char name[51];
    char surname[51];
    int hp;
    int energy;
  public:
    void start_game();
    bool is_alive();
    int change_field(int field, int delta);
    void eat();
    void wait();
    void show();
};

void Student::start_game() {
  std::cin >> this->name >> this->surname;
  this->hp = 100;
  this->energy = 100;
}

bool Student::is_alive() {
  return this->hp > 0;
}

int Student::change_field(int field, int delta) {
  if (field == 0) {
    this->hp += delta;
    if (this->hp < 0) this->hp = 0;
    else if (this->hp > 100) this->hp = 100;
    return this->hp;
  } else {
    this->energy += delta;
    if (this->energy < 0) this->energy = 0;
    else if (this->energy > 100) this->energy = 100;
    return this->energy;
  }
}

void Student::eat() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, 7);
  }
}

void Student::wait() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, -3);
  }
}

void Student::show() {
  std::cout << this->name << " " << this->surname << ": HP = "
            << std::setfill('0') << std::setw(3)
            << this->hp << ", Energy = "
            << std::setfill('0') << std::setw(3)
            << this->energy << ".";

  if (this->hp <= 0) {
    std::cout << " Game over.";
  }

std::cout << std::endl;
}

int main() {
  Student student;
  student.start_game();

  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    char command[5] = {};
    std::cin >> command;

    if (std::strcmp(command, "Wait") == 0) {
      student.wait();
    } else if (std::strcmp(command, "Eat") == 0) {
      student.eat();
    }

    student.show();
  }

  return 0;
}