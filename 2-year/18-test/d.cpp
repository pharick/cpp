#include <iostream>
#include <fstream>
#include <cstring>

class Room {
private:
  int capacity;
  bool occupied;
public:
  Room(int capacity = 1, bool occupied = false);
  bool is_occupied() { return occupied; };
  int get_capacity() { return capacity; };
  // void set_capacity(int capacity) { this->capacity = capacity; };
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

Hotel load_hotel(std::ifstream &file) {
  int n;
  file >> n;

  Hotel hotel(n);

  for (int i = 0; i < n; i++) {
    int capacity;
    bool is_occupied;
    file >> capacity >> is_occupied;
    hotel.get_room(i) = Room(capacity, is_occupied);
  }

  return hotel;
}

void save_hotel(std::ofstream &file, Hotel h) {
  file << h.get_room_count() << std::endl;

  for (int i = 0; i < h.get_room_count(); i++) {
    file << h.get_room(i).get_capacity() << ' ' << h.get_room(i).is_occupied() << std::endl;
  }
}

int main() {
  std::ifstream in("source.txt");
  std::ofstream out("destination.txt");
  
  Hotel hotel = load_hotel(in);

  int m;
  in >> m;

  char command[11] = {};
  int p;
  for (int i = 0; i < m; i++) {
    in >> command;

    if (!strcmp(command, "RESERVE")) {
      in >> p;
      hotel.find_room(p);
    } else if (!strcmp(command, "STATUS"))
      hotel.count_free();
    else if (!strcmp(command, "FREE")) {
      in >> p;
      hotel.get_room(p).free();
    }
  }

  save_hotel(out, hotel);

  in.close();
  out.close();
  return 0;
}