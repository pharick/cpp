#include <iostream>
#include <cstring>

#include "hotel.h"

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