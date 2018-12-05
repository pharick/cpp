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

void add_mark(Student &s, int mark)
{
  if (s.mark_count <= 150)
  {
    s.marks[s.mark_count] = mark;
    s.mark_count++;
  }
}

void add_total_marks(StudentJournal &journal)
{
  for (int i = 0; i < journal.count; i++)
  {
    double avg_mark = get_student_avg_mark(journal.data[i]);
    if (avg_mark >= 4.5)
      add_mark(journal.data[i], 5);
    else if (avg_mark >= 3.5)
      add_mark(journal.data[i], 4);
    else if (avg_mark >= 2.5)
      add_mark(journal.data[i], 3);
    else
      add_mark(journal.data[i], 2);
  }
}

int main()
{
  StudentJournal journal = read_journal();
  add_total_marks(journal);
  print_journal(journal);
  return 0;
}