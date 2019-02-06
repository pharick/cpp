#include <iostream>
#include <cstring>

class Room {
private:
  int capacity;
  bool occupied;
public:
  Room(int capacity = 1, bool occupied = false);
  bool is_occupied() { return occupied; };
  int get_capacity() { return capacity; };
  void reserve() { occupied = true; };
  void free() { occupied = false; };
};

Room::Room(int capacity, bool occupied) {
  this->capacity = capacity;
  this->occupied = occupied;
}

class Hotel {
private:
  int room_count;
  Room *rooms;
public:
  Hotel(int room_count);
  Hotel(const Hotel &);
  ~Hotel();

  int get_room_count() { return room_count; };
  Room& get_room(int p) { return rooms[p]; };
  int count_free();
  int find_room(int k);
};

Hotel::Hotel(int room_count) {
  this->room_count = room_count;
  this->rooms = new Room[room_count];
  for (int i = 0; i < room_count; i++) {
    int capacity;
    std::cin >> capacity;
    this->rooms[i] = Room(capacity);
  }
}

Hotel::Hotel(const Hotel &tmp) {
  this->room_count = tmp.room_count;
  this->rooms = new Room[room_count];
  for (int i = 0; i < room_count; i++) {
    this->rooms[i] = tmp.rooms[i];
  }
}

Hotel::~Hotel() {
  delete [] this->rooms;
};

int Hotel::count_free() {
  int count = 0;
  for (int i = 0; i < room_count; i++)
    if (!rooms[i].is_occupied()) count++;
  return count;
}

int Hotel::find_room(int k) {
  for (int i = 0; i < room_count; i++)
    if (!rooms[i].is_occupied() && rooms[i].get_capacity() == k) {
      rooms[i].reserve();
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

    if (!strcmp(command, "RESERVE")) {
      std::cin >> p;
      std::cout << hotel.find_room(p) << std::endl;
    } else if (!strcmp(command, "STATUS"))
      std::cout << hotel.count_free() << std::endl;
    else if (!strcmp(command, "FREE")) {
      std::cin >> p;
      hotel.get_room(p).free();
    }
  }
}