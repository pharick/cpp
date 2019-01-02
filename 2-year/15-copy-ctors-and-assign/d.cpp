#include <iostream>
#include <cstring>

class Barrel {
private:
  int cnt;
  char *balls;
public:
  Barrel(char *str = NULL);
  ~Barrel();
  int count();
  void clockwise(int x);
  void countercw(int x);
  char extract();
};

Barrel::Barrel(char *str) {
  this->cnt = strlen(str);
  this->balls = new char[strlen(str)];
  for (int i = 0; i < strlen(str); i++) {
    this->balls[i] = str[i];
  }
}

Barrel::~Barrel() {
  delete [] this->balls;
}

void Barrel::clockwise(int x) {
  for (int i = 0; i < x; i++) {
    char tmp = this->balls[this->cnt - 1];

    for (int j = this->cnt - 2; j >= 0; j--) {
      this->balls[j + 1] = this->balls[j];
    }

    this->balls[0] = tmp;
  }
}

void Barrel::countercw(int x) {
  for (int i = 0; i < x; i++) {
    char tmp = this->balls[0];

    for (int j = 1; j < this->cnt; j++) {
      this->balls[j - 1] = this->balls[j];
    }

    this->balls[this->cnt - 1] = tmp;
  }
}

char Barrel::extract() {
  char extracted = this->balls[0];
  char *new_balls = new char[this->cnt - 1];
  
  for (int i = 1; i < this->cnt; i++) {
    new_balls[i - 1] = this->balls[i];
  }

  delete [] this->balls;
  this->balls = new_balls;
  this->cnt--;

  return extracted;
}

int main() {
  char balls[1000] = {};
  std::cin >> balls;

  Barrel barrel(balls);

  int m;
  std::cin >> m;

  for (int i = 0; i < m; i++) {
    int x;
    std::cin >> x;
    if (x > 0) {
      barrel.countercw(x);
    } else {
      barrel.clockwise(x * -1);
    }

    std::cout << barrel.extract();
  }

  std::cout << std::endl;
  return 0;
}