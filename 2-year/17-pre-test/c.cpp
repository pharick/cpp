#include <iostream>
#include <fstream>

bool is_in_arr(int arr[], int n, int a) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == a) return true;
  }
  return false;
}

int main() {
  std::ifstream in("INPUT.TXT");
  std::ofstream out("OUTPUT.TXT");

  int real, propos;
  in >> real >> propos;

  int digits_real[4], digits_propos[4];

  digits_real[3] = real % 10;
  digits_real[2] = real / 10 % 10;
  digits_real[1] = real / 100 % 10;
  digits_real[0] = real / 1000 % 10;

  digits_propos[3] = propos % 10;
  digits_propos[2] = propos / 10 % 10;
  digits_propos[1] = propos / 100 % 10;
  digits_propos[0] = propos / 1000 % 10;

  int bulls = 0, cows = 0;
  for (int i = 0; i < 4; i++) {
    if (digits_propos[i] == digits_real[i]) bulls++;
    else if (is_in_arr(digits_real, 4, digits_propos[i])) cows++;
  }

  out << bulls << " " << cows << std::endl;

  in.close();
  out.close();
  return 0;
}