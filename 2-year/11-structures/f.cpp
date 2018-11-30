#include <iostream>
using namespace std;

struct Student
{
  char name[51];
  char surname[51];
  int age;
  int grade;
  int mark_count;
  int *marks;
};

Student read_student()
{
  Student student;
  cin >> student.name >> student.surname >> student.age >> student.grade >> student.mark_count;
  student.marks = new int[student.mark_count];
  for (int i = 0; i < student.mark_count; i++)
  {
    cin >> student.marks[i];
  }
  return student;
}

void print_student(Student *student)
{
  cout << student->name << " " << student->surname << " " << student->age << " " << student->grade << " " << student->mark_count << endl;
  for (int i = 0; i < student->mark_count; i++)
  {
    cout << student->marks[i] << " ";
  }
  cout << endl;
}

int main()
{
  Student students[5] = {};

  for (int i = 0; i < 5; i++)
  {
    students[i] = read_student();
    print_student(&students[i]);
  }

  return 0;
}