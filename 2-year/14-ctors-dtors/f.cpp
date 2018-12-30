#include <iostream>
#include <iomanip>
#include <cstring>

class Bar
{
private:
  int value;

public:
  Bar(int value = 100);
  void set(int x);
  int get();
  void add(int x);
  void show();
};

Bar::Bar(int value)
{
  set(value);
}

void Bar::set(int x)
{
  this->value = x;
  if (this->value < 0)
    this->value = 0;
  else if (this->value > 100)
    this->value = 100;
}

int Bar::get() {
  return this->value;
}

void Bar::add(int x) {
  this->value += x;
  if (this->value < 0)
    this->value = 0;
  else if (this->value > 100)
    this->value = 100;
}

void Bar::show() {
  std::cout << "[";
  for (int i = 0; i < this->value; i++) std::cout << "=";
  for (int i = 0; i < 100 - this->value; i++) std::cout << " ";
  std::cout << "] " << std::setfill('0') << std::setw(3) << this->value << "/100";
}

class Student
{
private:
  char name[51];
  char surname[51];
  Bar hp;
  Bar energy;
  Bar iq;
  Bar sanity;
  Bar excitement;
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
  return this->hp.get() > 0;
}

void Student::change_params(int hp, int energy, int iq, int sanity, int excitement)
{
  this->hp.add(hp);
  this->energy.add(energy);
  this->iq.add(iq);
  this->sanity.add(sanity);
  this->excitement.add(excitement);
}

void Student::apply_effects()
{
  if (energy.get() == 0)
    this->hp.add(-25);
  if (energy.get() == 100)
    this->hp.add(-10);
  if (sanity.get() <= 10)
    this->hp.add(-(15 - sanity.get()));
  if (excitement.get() < 25)
    this->sanity.add(-5);
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
  std::cout << this->name << " " << this->surname << std::endl;
  
  std::cout << "        HP: ";
  this->hp.show();
  std::cout << std::endl;

  std::cout << "    Energy: ";
  this->energy.show();
  std::cout << std::endl;

  std::cout << "        IQ: ";
  this->iq.show();
  std::cout << std::endl;

  std::cout << "    Sanity: ";
  this->sanity.show();
  std::cout << std::endl;

  std::cout << "Excitement: ";
  this->excitement.show();
  std::cout << std::endl;
}

int main()
{
  char name[51], surname[51];
  std::cin >> name >> surname;

  int hp, energy, iq, sanity, excitement;
  std::cin >> hp >> energy >> iq >> sanity >> excitement;

  Student student(name, surname, hp, energy, iq, sanity, excitement);

  student.show();

  return 0;
}