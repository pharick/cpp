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

bool will_graduate(Student *student, int after_years)
{
  return student->grade + after_years > 11;
}

int main()
{
  int n;
  Student students[5] = {};

  cin >> n;

  int result = 0;
  for (int i = 0; i < 5; i++)
  {
    students[i] = read_student();
    result += will_graduate(&students[i], n);
  }

  cout << result << endl;
  return 0;
}