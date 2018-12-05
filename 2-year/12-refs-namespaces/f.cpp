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

double get_student_avg_mark(Student &student)
{
  int mark_sum = 0;
  for (int i = 0; i < student.mark_count; i++)
  {
    mark_sum += student.marks[i];
  }
  return mark_sum * 1.0 / student.mark_count;
}

void remove_student_from_journal(StudentJournal &journal, int n)
{
  for (int i = n; i < journal.count - 1; i++)
  {
    journal.data[i] = journal.data[i + 1];
  }
  journal.count--;
}

void filter_agv_above(StudentJournal &journal, double x = 4.5)
{
  for (int i = 0; i < journal.count; i++)
  {
    if (get_student_avg_mark(journal.data[i]) < x)
    {
      remove_student_from_journal(journal, i);
      i--;
    }
  }
}

int main()
{
  StudentJournal journal = read_journal();
  double x;
  std::cin >> x;
  filter_agv_above(journal, x);
  print_journal(journal);
  return 0;
}