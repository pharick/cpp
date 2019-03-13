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

class Helicopter: public Car {
  int height;
  int water;
public:
  Helicopter();
  void lift(int height);
  void add_water(int amount);
  void release_water() { water = 0; }
  int get_height() { return height; }
  int get_water() { return water; }
  void move(int d);
};

Helicopter::Helicopter():Car() {
  height = 0;
  water = 0;
}

void Helicopter::lift(int height) {
  if (water > 15000) return;
  if (this->height + height < 0) this->height = 0;
  else this->height += height;
}

void Helicopter::add_water(int amount) {
  if (height == 0) water += amount;
}

void Helicopter::move(int d) {
  if (height > 0) Car::move(d);
}

int main() {
  int k;
  std::cin >> k;

  Helicopter helicopter;

  char command[10] = {};
  int d;

  for (int i = 0; i < k; i++) {
    std::cin >> command;

    if (!strcmp(command, "MOVE")) {
      std::cin >> d;
      helicopter.move(d);
    } else if (!strcmp(command, "LIFT")) {
      std::cin >> d;
      helicopter.lift(d);
    } else if (!strcmp(command, "WATER")) {
      std::cin >> d;
      helicopter.add_water(d);
    } else if (!strcmp(command, "RELEASE")) {
      helicopter.release_water();
    } else if (!strcmp(command, "STATUS")) {
      std::cout << helicopter.get_position() << " "
                << helicopter.get_height() << " "
                << helicopter.get_water() << std::endl;
    }
  }

  return 0;
}