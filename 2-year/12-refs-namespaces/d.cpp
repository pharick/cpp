#include <iostream>

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
  std::cin >> student.name >> student.surname >> student.age >> student.grade >> student.mark_count;
  student.marks = new int[150];
  for (int i = 0; i < student.mark_count; i++)
  {
    std::cin >> student.marks[i];
  }
  return student;
}

void print_student(Student &student)
{
  std::cout << student.name << " " << student.surname << " " << student.age << " " << student.grade << " " << student.mark_count << std::endl;
  for (int i = 0; i < student.mark_count; i++)
  {
    std::cout << student.marks[i] << " ";
  }
  std::cout << std::endl;
}

double get_student_avg_mark(Student &student)
{
  int mark_sum = 0;
  for (int i = 0; i < student.mark_count; i++)
  {
    mark_sum += student.marks[i];
  }
  return mark_sum * 1.0 / student.mark_count;
}

void add_mark(Student &s, int mark) {
  if (s.mark_count <= 150) {
    s.marks[s.mark_count] = mark;
    s.mark_count++;
  }
}

int main()
{
  Student students[5] = {};

  for (int i = 0; i < 5; i++)
  {
    students[i] = read_student();

    while (get_student_avg_mark(students[i]) < 4.5) {
      add_mark(students[i], 5);
    }

    print_student(students[i]);
    delete [] students[i].marks;
  }

  return 0;
}