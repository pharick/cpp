#include <iostream>
#include <iomanip>
#include <cstring>

class Student {
  private:
    char name[51];
    char surname[51];
    int hp;
    int energy;
    int iq;
  public:
    void start_game();
    bool is_alive();
    int change_field(int field, int delta);
    void eat();
    void wait();
    void study();
    void show();
};

void Student::start_game() {
  std::cin >> this->name >> this->surname;
  this->hp = 100;
  this->energy = 100;
  this->iq = 20;
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
  } else if (field == 1) {
    this->energy += delta;
    if (this->energy < 0) this->energy = 0;
    else if (this->energy > 100) this->energy = 100;
    return this->energy;
  } else {
    this->iq += delta;
    if (this->iq < 0) this->iq = 0;
    else if (this->iq > 100) this->iq = 100;
    return this->iq;
  }
}

void Student::eat() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, 7);
    change_field(2, -1);
  }
}

void Student::wait() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, -3);
  }
}

void Student::study() {
  if (this->is_alive()) {
    change_field(0, -2);
    change_field(1, -4);
    change_field(2, 5);
  }
}

void Student::show() {
  std::cout << this->name << " " << this->surname << ": HP = "
            << std::setfill('0') << std::setw(3)
            << this->hp << ", Energy = "
            << std::setfill('0') << std::setw(3)
            << this->energy << ", IQ = "
            << std::setfill('0') << std::setw(3)
            << this->iq << ".";

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
    char command[7] = {};
    std::cin >> command;

    if (std::strcmp(command, "Wait") == 0) {
      student.wait();
    } else if (std::strcmp(command, "Eat") == 0) {
      student.eat();
    } else if (std::strcmp(command, "Study") == 0) {
      student.study();
    }

    student.show();
  }

  return 0;
}