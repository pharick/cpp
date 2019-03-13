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

class Taxi: public Car {
  int cost;
  long long distance;
public:
  Taxi(int cost);
  long long get_total_cost() { return distance * cost; }
  void move(int d);
  void reset() { distance = 0; }
};

Taxi::Taxi(int cost):Car() {
  this->cost = cost;
  this->distance = 0;
}

void Taxi::move(int d) {
  Car::move(d);
  distance += abs(d);
}

int main() {
  int k, z;
  std::cin >> k >> z;

  Taxi taxi(z);

  char command[9] = {};
  int d;

  for (int i = 0; i < k; i++) {
    std::cin >> command;

    if (!strcmp(command, "MOVE")) {
      std::cin >> d;
      taxi.move(d);
    } else if (!strcmp(command, "POSITION")) {
      std::cout << taxi.get_position() << std::endl;
    } else if (!strcmp(command, "COST")) {
      std::cout << taxi.get_total_cost() << std::endl;
    } else if (!strcmp(command, "RESET")) {
      taxi.reset();
    }
  }

  return 0;
}