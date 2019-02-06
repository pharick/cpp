#include "hotel.h"

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