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

int age_enterance(Student &s) {
  return s.age - s.grade + 1;
}

int main()
{
  Student students[5] = {};

  for (int i = 0; i < 5; i++)
  {
    students[i] = read_student();
    cout << age_enterance(students[i]) << endl;
    delete [] students[i].marks;
  }

  return 0;
}