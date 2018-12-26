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

public:
  void start_game();
  bool is_alive();
  int change_field(int &field, int delta);
  void eat();
  void wait();
  void study();
  void sleep();
  void watch_tv();
  void show();
};

void Student::start_game()
{
  std::cin >> this->name >> this->surname;
  this->hp = 100;
  this->energy = 100;
  this->iq = 20;
  this->sanity = 100;
  this->excitement = 50;
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

void Student::eat()
{
  if (this->is_alive())
  {
    change_field(this->hp, 1);
    change_field(this->energy, 7);
    change_field(this->iq, -1);
    change_field(this->excitement, -2);
  }
}

void Student::wait()
{
  if (this->is_alive())
  {
    change_field(this->hp, 1);
    change_field(this->energy, -3);
    change_field(this->excitement, -3);
  }
}

void Student::study()
{
  if (this->is_alive())
  {
    change_field(this->hp, -2);
    change_field(this->energy, -4);
    change_field(this->iq, 5);
    change_field(this->sanity, -5);
    change_field(this->excitement, -2);
  }
}

void Student::sleep()
{
  if (this->is_alive())
  {
    change_field(this->hp, 2);
    change_field(this->energy, -2);
    change_field(this->sanity, 7);
  }
}

void Student::watch_tv()
{
  if (this->is_alive())
  {
    change_field(this->hp, -2);
    change_field(this->energy, -3);
    change_field(this->iq, -3);
    change_field(this->sanity, 1);
    change_field(this->excitement, 5);
  }
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
  Student student;
  student.start_game();

  int n;
  std::cin >> n;
  std::cin.ignore(8, '\n');

  for (int i = 0; i < n; i++)
  {
    char command[9] = {};
    std::cin.getline(command, 9);

    if (std::strcmp(command, "Wait") == 0)
    {
      student.wait();
    }
    else if (std::strcmp(command, "Eat") == 0)
    {
      student.eat();
    }
    else if (std::strcmp(command, "Study") == 0)
    {
      student.study();
    }
    else if (std::strcmp(command, "Sleep") == 0)
    {
      student.sleep();
    }
    else if (std::strcmp(command, "Watch TV") == 0)
    {
      student.watch_tv();
    }

    student.show();
  }

  return 0;
}