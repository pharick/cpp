#ifndef ROOM_H
#define ROOM_H

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

#endif