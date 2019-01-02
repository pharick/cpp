#include <iostream>

class CandyBox {
private:
  int cnt;
  int* candies;
public:
  CandyBox();
  ~CandyBox();
  void read();
  void print();
  int varieties();
};

CandyBox::CandyBox() {
  this->cnt = 0;
  this->candies = new int[0];
}

CandyBox::~CandyBox() {
  delete [] this->candies;
}

void CandyBox::read() {
  std::cin >> this->cnt;
  delete [] this->candies;
  this->candies = new int[this->cnt];
  for (int i = 0; i < this->cnt; i++) {
    std::cin >> this->candies[i];
  }
}

void CandyBox::print() {
  for (int i = 0; i < this->cnt; i++) {
    std::cout << this->candies[i];
  }
  std::cout << std::endl;
}

int CandyBox::varieties() {
  int result = 0;

  for (int i = 0; i < this->cnt; i++) {
    bool is_unique = true;
    for (int j = 0; j < i; j++) {
      if (this->candies[i] == this->candies[j]) {
        is_unique = false;
        break;
      }
    }

    if (is_unique) {
      result++;
    }
  }

  return result;
}

int main() {
  CandyBox artem_box;
  artem_box.read();
  std::cout << artem_box.varieties() << std::endl;
  return 0;
}