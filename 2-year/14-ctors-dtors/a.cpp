#include <iostream>
#include <iomanip>

class Time
{
private:
  int h;
  int m;
  int s;

public:
  Time(int h = 0, int m = 0, int s = 0);
  void add_seconds(int x);
  void show();
};

Time::Time(int h, int m, int s)
{
  this->h = h;
  this->m = m;
  this->s = s;
}

void Time::add_seconds(int x)
{
  int seconds = this->h * 3600 + this->m * 60 + this->s;
  
  seconds += x;
  seconds %= 86400;
  if (seconds < 0) seconds = 86400 + seconds;
  
  this->h = seconds / 3600;
  seconds %= 3600;
  this->m = seconds / 60;
  this->s = seconds % 60;
}

void Time::show()
{
  std::cout << std::setfill('0') << std::setw(2) << this->h << ":"
            << std::setfill('0') << std::setw(2) << this->m << ":"
            << std::setfill('0') << std::setw(2) << this->s
            << std::endl;
}

int main()
{
  int p, h, m, s, t;
  std::cin >> p >> h >> m >> s;

  switch (p) {
    case 0: h = 0; m = 0; s = 0; break;
    case 2: s = 0; break;
  }

  Time my_time(h, m, s);

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int add;
    std::cin >> add;
    my_time.add_seconds(add);
    my_time.show();
  }

  return 0;
}