#include <iostream>
#include <cstring>

struct Student
{
  char name[51];
  char surname[51];
  int age;
  int grade;
  int mark_count;
  int *marks;
};

struct StudentJournal
{
  int count;
  Student *data;
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

StudentJournal read_journal()
{
  StudentJournal journal;
  std::cin >> journal.count;
  journal.data = new Student[150];
  for (int i = 0; i < journal.count; i++)
  {
    journal.data[i] = read_student();
  }

  return journal;
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

void print_journal(StudentJournal journal)
{
  std::cout << journal.count << std::endl;
  for (int i = 0; i < journal.count; i++)
  {
    print_student(journal.data[i]);
  }
}

void remove_student_from_journal(StudentJournal &journal, int n)
{
  for (int i = n; i < journal.count - 1; i++)
  {
    journal.data[i] = journal.data[i + 1];
  }
  journal.count--;
}

bool equal_students(Student &s1, Student &s2)
{
  if (strcmp(s1.name, s2.name) == 0 && strcmp(s1.surname, s2.surname) == 0 &&
      s1.age == s2.age && s1.grade == s2.grade)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void remove_duplicates(StudentJournal &journal)
{
  for (int i = 0; i < journal.count - 1; i++)
  {
    for (int j = i + 1; j < journal.count; j++)
    {
      if (equal_students(journal.data[i], journal.data[j]))
      {
        remove_student_from_journal(journal, j);
        i--;
      }
    }
  }
}

int main()
{
  StudentJournal journal = read_journal();
  remove_duplicates(journal);
  print_journal(journal);
  return 0;
}