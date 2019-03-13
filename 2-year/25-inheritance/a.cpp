#include <iostream>
#include <cstring>

class Car {
protected:
  int pos;

public:
  Car(): pos(0) {}
  void move(int d) { pos += d; }
  int get_position() { return pos; }
};

int main() {
  int k;
  std::cin >> k;

  Car car;

  char command[9] = {};
  int d;

  for (int i = 0; i < k; i++) {
    std::cin >> command;

    if (!strcmp(command, "MOVE")) {
      std::cin >> d;
      car.move(d);
    } else if (!strcmp(command, "POSITION")) {
      std::cout << car.get_position() << std::endl;
    }
  }

  return 0;
}