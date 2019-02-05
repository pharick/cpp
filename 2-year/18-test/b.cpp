#include <iostream>
#include <cstring>

class Hotel {
private:
  int room_count;
  bool *occupied;
public:
  Hotel(int n);
  Hotel(const Hotel &);
  ~Hotel();
  bool is_occupied(int p) { return occupied[p]; };
  void free_room(int p) { occupied[p] = false; };
  int count_free();
  int find_room();
};

Hotel::Hotel(int n) {
  this->room_count = n;
  this->occupied = new bool[room_count];
  for (int i = 0; i < n; i++) occupied[i] = 0;
}

Hotel::Hotel(const Hotel &tmp) {
  this->room_count = tmp.room_count;
  this->occupied = new bool [tmp.room_count];
  for (int i = 0; i < tmp.room_count; i++) {
    this->occupied[i] = tmp.occupied[i];
  }
}

Hotel::~Hotel() {
  delete [] this->occupied;
}

int Hotel::count_free() {
  int count = 0;
  for (int i = 0; i < room_count; i++)
    if (!occupied[i]) count++;
  return count;
}

int Hotel::find_room() {
  for (int i = 0; i < room_count; i++)
    if (!occupied[i]) {
      occupied[i] = true;
      return i;
    }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  Hotel hotel(n);

  int m;
  std::cin >> m;

  char command[11] = {};
  int p;
  for (int i = 0; i < m; i++) {
    std::cin >> command;

    if (!strcmp(command, "RESERVE"))
      std::cout << hotel.find_room() << std::endl;
    else if (!strcmp(command, "STATUS"))
      std::cout << hotel.count_free() << std::endl;
    else if (!strcmp(command, "FREE")) {
      std::cin >> p;
      hotel.free_room(p);
    }
  }
}