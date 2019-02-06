#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"

#include <iostream>

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

#endif