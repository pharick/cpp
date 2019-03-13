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

class Bus: public Car {
protected:
  int capacity;
  int passenger_count;
  int *passengers;
public:
  Bus(int capacity = 10);
  ~Bus();
  bool add_passenger(int destination);
  void release();
  int get_passenger_count() { return passenger_count; }
};

Bus::Bus(int capacity):Car() {
  this->capacity = capacity;
  passenger_count = 0;
  passengers = new int[capacity];
}

Bus::~Bus() {
  delete [] passengers;
}

bool Bus::add_passenger(int destination) {
  if (passenger_count >= capacity) return false;
  int *new_passengers = new int[capacity + 1];
  for (int i = 0; i < capacity; i++) new_passengers[i] = passengers[i];
  new_passengers[passenger_count] = destination;
  delete [] passengers;
  passengers = new_passengers;
  passenger_count++;

  return true;
}

void Bus::release() {
  int new_passenger_count = 0;
  for (int i = 0; i < passenger_count; i++)
    if (passengers[i] != pos) new_passenger_count++;
  
  int *new_passengers = new int[new_passenger_count];

  for (int i = 0, j = 0; i < passenger_count; i++)
    if (passengers[i] != pos) new_passengers[j++] = passengers[i];

  delete [] passengers;
  passengers = new_passengers;
  passenger_count = new_passenger_count;
}

class Trolleybus: public Bus {
  int l, r;
public:
  Trolleybus(int p, int c, int l, int r);
  void move(int d);
};

Trolleybus::Trolleybus(int p, int c, int l, int r) {
  pos = p;
  capacity = c;
  this->l = l;
  this->r = r;
}

void Trolleybus::move(int d) {
  if (pos + d <= l) pos = l;
  else if (pos + d >= r) pos = r;
  else Bus::move(d);
}

int main() {
  int k, p, c, l, r;
  std::cin >> k >> p >> c >> l >> r;

  Trolleybus trolleybus(p, c, l, r);

  char command[10] = {};
  int d;

  for (int i = 0; i < k; i++) {
    std::cin >> command;

    if (!strcmp(command, "MOVE")) {
      std::cin >> d;
      trolleybus.move(d);
    } else if (!strcmp(command, "POSITION")) {
      std::cout << trolleybus.get_position() << std::endl;
    } else if (!strcmp(command, "PASSENGER")) {
      std::cin >> d;
      std::cout << (trolleybus.add_passenger(d) ? "SUCCESS" : ":(") << std::endl;
    } else if (!strcmp(command, "RELEASE")) {
      trolleybus.release();
    } else if (!strcmp(command, "PASSENGERS")) {
      std::cout << trolleybus.get_passenger_count() << std::endl;
    }
  }

  return 0;
}