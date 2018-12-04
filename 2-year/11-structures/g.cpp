#include <iostream>
#include <iomanip>
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

double get_student_avg_mark(Student *student)
{
  int mark_sum = 0;
  for (int i = 0; i < student->mark_count; i++)
  {
    mark_sum += student->marks[i];
  }
  return mark_sum * 1.0 / student->mark_count;
}

int main()
{
  Student students[5] = {};

  for (int i = 0; i < 5; i++)
  {
    students[i] = read_student();
    cout << fixed << setprecision(6) << get_student_avg_mark(&students[i]) << endl;
    delete [] students[i].marks;
  }

  return 0;
}