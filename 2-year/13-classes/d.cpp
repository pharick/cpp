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
    int sanity;
    int excitement;
  public:
    void start_game();
    bool is_alive();
    int change_field(int field, int delta);
    void eat();
    void wait();
    void study();
    void sleep();
    void watch_tv();
    void show();
};

void Student::start_game() {
  std::cin >> this->name >> this->surname;
  this->hp = 100;
  this->energy = 100;
  this->iq = 20;
  this->sanity = 100;
  this->excitement = 50;
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
  } else if (field == 2) {
    this->iq += delta;
    if (this->iq < 0) this->iq = 0;
    else if (this->iq > 100) this->iq = 100;
    return this->iq;
  } else if (field == 3) {
    this->sanity += delta;
    if (this->sanity < 0) this->sanity = 0;
    else if (this->sanity > 100) this->sanity = 100;
    return this->sanity;
  } else {
    this->excitement += delta;
    if (this->excitement < 0) this->excitement = 0;
    else if (this->excitement > 100) this->excitement = 100;
    return this->excitement;
  }
}

void Student::eat() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, 7);
    change_field(2, -1);
    change_field(4, -2);
  }
}

void Student::wait() {
  if (this->is_alive()) {
    change_field(0, 1);
    change_field(1, -3);
    change_field(4, -3);
  }
}

void Student::study() {
  if (this->is_alive()) {
    change_field(0, -2);
    change_field(1, -4);
    change_field(2, 5);
    change_field(3, -5);
    change_field(4, -2);
  }
}

void Student::sleep() {
  if (this->is_alive()) {
    change_field(0, 2);
    change_field(1, -2);
    change_field(3, 7);
  }
}

void Student::watch_tv() {
  if (this->is_alive()) {
    change_field(0, -2);
    change_field(1, -3);
    change_field(2, -3);
    change_field(3, 1);
    change_field(4, 5);
  }
}

void Student::show() {
  std::cout << this->name << " " << this->surname << ": HP = "
            << std::setfill('0') << std::setw(3)
            << this->hp << ", Energy = "
            << std::setfill('0') << std::setw(3)
            << this->energy << ", IQ = "
            << std::setfill('0') << std::setw(3)
            << this->iq << ", Sanity = "
            << std::setfill('0') << std::setw(3)
            << this->sanity << ", Excitement = "
            << std::setfill('0') << std::setw(3)
            << this->excitement << ".";

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
  std::cin.ignore(8, '\n');

  for (int i = 0; i < n; i++) {
    char command[9] = {};
    std::cin.getline(command, 9);

    if (std::strcmp(command, "Wait") == 0) {
      student.wait();
    } else if (std::strcmp(command, "Eat") == 0) {
      student.eat();
    } else if (std::strcmp(command, "Study") == 0) {
      student.study();
    } else if (std::strcmp(command, "Sleep") == 0) {
      student.sleep();
    } else if (std::strcmp(command, "Watch TV") == 0) {
      student.watch_tv();
    } 

    student.show();
  }

  return 0;
}