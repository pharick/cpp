#include <iostream>
#include <iomanip>
#include <cstring>

class Student
{
private:
  char name[51];
  char surname[51];
  int hp;
  int energy;
  int iq;
  int sanity;
  int excitement;
  int change_field(int &field, int delta);
  void change_params(int hp, int energy, int iq, int sanity, int excitement);
  void apply_effects();

public:
  bool is_alive();
  void eat();
  void wait();
  void study();
  void sleep();
  void watch_tv();
  void show();
  Student(int hp = 100, int energy = 100, int iq = 100, int sanity = 20, int excitement = 50);
  Student(char name[], char surname[], int hp = 100, int energy = 100, int iq = 100, int sanity = 20, int excitement = 50);
};

Student::Student(int hp, int energy, int iq, int sanity, int excitement)
{
  std::cin >> this->name >> this->surname;
  this->hp = hp;
  this->energy = energy;
  this->iq = iq;
  this->sanity = sanity;
  this->excitement = excitement;
}

Student::Student(char name[], char surname[], int hp, int energy, int iq, int sanity, int excitement)
{
  strcpy(this->name, name);
  strcpy(this->surname, surname);
  this->hp = hp;
  this->energy = energy;
  this->iq = iq;
  this->sanity = sanity;
  this->excitement = excitement;
}

bool Student::is_alive()
{
  return this->hp > 0;
}

int Student::change_field(int &field, int delta)
{
  field += delta;
  if (field < 0)
    field = 0;
  else if (field > 100)
    field = 100;
  return field;
}

void Student::change_params(int hp, int energy, int iq, int sanity, int excitement)
{
  change_field(this->hp, hp);
  change_field(this->energy, energy);
  change_field(this->iq, iq);
  change_field(this->sanity, sanity);
  change_field(this->excitement, excitement);
}

void Student::apply_effects()
{
  if (this->energy == 0)
    change_field(this->hp, -25);
  if (energy == 100)
    change_field(this->hp, -10);
  if (sanity <= 10)
    change_field(this->hp, -(15 - this->sanity));
  if (excitement < 25)
    change_field(this->sanity, -5);
}

void Student::eat()
{
  if (!is_alive())
    return;
  this->change_params(1, 7, -1, 0, -2);
  apply_effects();
}

void Student::wait()
{
  if (!is_alive())
    return;
  this->change_params(1, -3, 0, 0, -3);
  apply_effects();
}

void Student::study()
{
  if (!is_alive())
    return;
  change_params(-2, -4, 5, -5, -2);
  apply_effects();
}

void Student::sleep()
{
  if (!is_alive())
    return;
  change_params(2, -2, 0, 7, 0);
  apply_effects();
}

void Student::watch_tv()
{
  if (!is_alive())
    return;
  change_params(-2, -3, -3, 1, 5);
  apply_effects();
}

void Student::show()
{
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

  if (this->hp <= 0)
  {
    std::cout << " Game over.";
  }

  std::cout << std::endl;
}

int main()
{
  char name[51], surname[51];
  std::cin >> name >> surname;

  int hp, energy, iq, sanity, excitement;
  std::cin >> hp >> energy >> iq >> sanity >> excitement;

  Student student(name, surname, hp, energy, iq, sanity, excitement);

  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    char command[9] = {};
    std::cin >> command;

    if (!strcmp(command, "Wait"))
    {
      student.wait();
    }
    else if (!strcmp(command, "Eat"))
    {
      student.eat();
    }
    else if (!strcmp(command, "Study"))
    {
      student.study();
    }
    else if (!strcmp(command, "Sleep"))
    {
      student.sleep();
    }
    else if (!strcmp(command, "Watch"))
    {
      student.watch_tv();
      std::cin >> command;
    }

    student.show();
  }

  return 0;
}