#include <iostream>
#include <cstring>
#include <cmath>

class Binary {
protected:
  bool data[32];
  void fill_zeros();
public:
  Binary();
  Binary(int value);
  Binary(char *s);
  void show() const;
  int to_int() const;

  Binary operator + (const Binary &second);
  Binary operator - (const Binary &second);
  Binary operator * (const Binary &second);
  Binary operator / (const Binary &second);
};

void Binary::fill_zeros() {
  for (int i = 0; i < 32; i++) data[i] = 0;
}

Binary::Binary() {
  fill_zeros();
}

Binary::Binary(int value) {
  fill_zeros();
  int i = 31;
  while (value > 1) {
    data[i] = value % 2;
    value /= 2;
    i--;
  }
  data[i] = value;
}

Binary::Binary(char *s) {
  fill_zeros();
  int j = 31;
  for (int i = strlen(s) - 1; i >= 0; i--) {
    data[j] = s[i] == '1';
    j--;
  }
}

int Binary::to_int() const {
  int n = 0;
  for (int i = 0; i < 32; i++) {
    n += data[i] ? pow(2, 32 - i - 1) : 0;
  }
  return n;
}

void Binary::show() const {
  int start = 0;
  while (data[start] == 0) start++;
  if (start > 31)
    std::cout << 0;
  else
    for (int i = start; i < 32; i++) {
      std::cout << data[i];
    }
}

Binary Binary::operator + (const Binary &second) {
  return Binary(this->to_int() + second.to_int());
}

Binary Binary::operator - (const Binary &second) {
  return Binary(this->to_int() - second.to_int());
}

Binary Binary::operator * (const Binary &second) {
  return Binary(this->to_int() * second.to_int());
}

Binary Binary::operator / (const Binary &second) {
  return Binary(this->to_int() / second.to_int());
}

int main() {
  char line1[1000000] = {}, line2[1000000] = {};
  std::cin >> line1 >> line2;
  Binary bin1(line1), bin2(line2);
  (bin1 + bin2).show();
  std::cout << std::endl;
  (bin1 - bin2).show();
  std::cout << std::endl;
  (bin1 * bin2).show();
  std::cout << std::endl;
  (bin1 / bin2).show();
  std::cout << std::endl;
  return 0;
}