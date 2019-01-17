#include <fstream>
#include <iostream>

int main() {
  std::ifstream in("in.txt");

  char symb;

  int count = 0;
  while (in.get(symb)) {
    if (symb == '\r') continue; 
    if (symb == '\n') {
      std::cout << count << " ";
      count = 0;
    } else {
      count++;
    }

    // std::cout << symb << " " << count << std::endl;
  }

  std::cout << count << std::endl;

  in.close();
  return 0;
}