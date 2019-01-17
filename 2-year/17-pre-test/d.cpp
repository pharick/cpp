#include <fstream>
#include <iostream>

int main() {
  std::ifstream in("in.txt", std::ios::ate);

  char a;

  in.seekg(-1, std::ios::cur);

  while (in.peek() != '\n') {
    in.seekg(-1, std::ios::cur);
  }

  int s1, s2;
  in >> s1 >> s2;

  in.seekg(0, std::ios::beg);

  char line[100000] = {};
  for (int i = 0; i < s1; i++) {
    in.getline(line, 100000);
  }

  for (int i = 0; i < s2 - s1; i++) {
    std::cout << line << std::endl;
    in.getline(line, 100000);
  }
  
  in.close();
  return 0;
}