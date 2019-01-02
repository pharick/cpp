#include <iostream>
#include <cstring>

class Student {
private:
  char name[51];
  char surname[51];
  int age;
  char phone[13];
public:
  Student();
  Student(char name[51], char surname[51], int age, char phone[13]);
  int get_age() { return age; };
  void print_full_name() { std::cout << this->surname << " " << this->name << std::endl; };
};

Student::Student() {
  strcpy(this->name, "Иван");
  strcpy(this->surname, "Иванов");
  this->age = 123;
  strcpy(this->phone, "+79051234567");
}

Student::Student(char name[51], char surname[51], int age, char phone[13]) {
  strcpy(this->name, name);
  strcpy(this->surname, surname);
  this->age = age;
  strcpy(this->phone, phone);
}

int main() {
  int n;
  std::cin >> n;

  Student *students = new Student[n];

  for (int i = 0; i < n; i++) {
    char name[51] = {}, surname[51] = {}, phone[13] = {};
    int age;
    std::cin >> surname >> name >> age >> phone;
    students[i] = Student(name, surname, age, phone);
  }

  int r;
  std::cin >> r;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (students[i].get_age() > r) {
      students[i].print_full_name();
      count++;
    }
  }

  if (!count) std::cout << "There are no adult students" << std::endl;

  delete [] students;
  return 0;
}