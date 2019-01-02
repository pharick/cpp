#include <iostream>

class CandyBox {
private:
  int cnt;
  int* candies;
public:
  CandyBox();
  CandyBox(const CandyBox &);
  ~CandyBox();
  void read();
  void print();
  int varieties();
  int size();
  int count(int x);
  int& at(int index);
};

CandyBox::CandyBox() {
  this->cnt = 0;
  this->candies = new int[0];
}

CandyBox::CandyBox(const CandyBox &tmp) {
  this->cnt = tmp.cnt;
  this->candies = new int [tmp.cnt];
  for (int i = 0; i < tmp.cnt; i++) {
    this->candies[i] = tmp.candies[i];
  }
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
    std::cout << this->candies[i] << " ";
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

int CandyBox::size() {
  return this->cnt;
}

int CandyBox::count(int x) {
  int result = 0;

  for (int i = 0; i < this->cnt; i++) {
    if (this->candies[i] == x) {
      result++;
    }
  }

  return result;
}

int& CandyBox::at(int index) {
  return this->candies[index];
}

CandyBox Arcady_process(CandyBox b) {
  int taken_count = 0;
  int taken[10000] = {};

  for (int i = 0; i < b.size(); i++) {
    if (b.at(i) % 2 == 0) {
      taken[taken_count] = b.at(i);
      b.at(i) = 0;
      taken_count++;
    }
  }

  for (int i = 0; i < taken_count; i += 2) {
    int place = 0;
    while (b.at(place) != 0) place++;
    b.at(place) = taken[i];
  }

  return b;
}

CandyBox Alice_process(CandyBox b) {
  for (int i = 0; i < b.size() / 2; i++) {
    b.at(i) = 0;
  }

  int taken_count = 0;
  int taken[5000] = {};

  for (int i = b.size() / 2; i < b.size(); i++) {
    taken[taken_count] = b.at(i);
    b.at(i) = 0;
    taken_count++;
  }

  int place = 0;
  for (int i = 0; i < taken_count; i++) {
    b.at(place) = taken[i];
    place += 2;
  }

  return b;
}

int count_afterwards(CandyBox b, int x) {
  int result = 0;
  result += Arcady_process(b).count(x);
  result += Alice_process(b).count(x);
  return result;
}

int main() {
  CandyBox artem_box;
  artem_box.read();
  
  int x;
  std::cin >> x;

  std::cout << count_afterwards(artem_box, x) << std::endl;

  return 0;
}