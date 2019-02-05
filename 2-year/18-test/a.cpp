#include <iostream>
#include <cstring>

class Hotel {
private:
  bool occupied[16];
public:
  Hotel();
  bool is_occupied(int p) { return occupied[p]; };
  void free_room(int p) { occupied[p] = false; };
  int count_free();
  int find_room();
};

Hotel::Hotel() {
  for (int i = 0; i < 16; i++) occupied[i] = 0;
}

int Hotel::count_free() {
  int count = 0;
  for (int i = 0; i < 16; i++)
    if (!occupied[i]) count++;
  return count;
}

int Hotel::find_room() {
  for (int i = 0; i < 16; i++)
    if (!occupied[i]) {
      occupied[i] = true;
      return i;
    }
  return -1;
}

int main() {
  Hotel hotel;

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