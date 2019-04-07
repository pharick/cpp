#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>

template <class T>
class Binary {
protected:
  T data[32];
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

template <class T>
void Binary<T>::fill_zeros() {
  for (int i = 0; i < 32; i++) data[i] = 0;
}

template <class T>
Binary<T>::Binary() {
  fill_zeros();
}

template <class T>
Binary<T>::Binary(int value) {
  fill_zeros();
  int i = 31;
  while (value > 1) {
    data[i] = value % 2;
    value /= 2;
    i--;
  }
  data[i] = value;
}

template <class T>
Binary<T>::Binary(char *s) {
  fill_zeros();
  int j = 31;
  for (int i = strlen(s) - 1; i >= 0; i--) {
    data[j] = s[i] == '1';
    j--;
  }
}

template <class T>
int Binary<T>::to_int() const {
  int n = 0;
  for (int i = 0; i < 32; i++) {
    n += data[i] ? pow(2, 32 - i - 1) : 0;
  }
  return n;
}

template <class T>
void Binary<T>::show() const {
  int start = 0;
  while (data[start] == 0) start++;
  if (start > 31)
    std::cout << 0;
  else
    for (int i = start; i < 32; i++) {
      std::cout << data[i];
    }
}

template <class T>
Binary<T> Binary<T>::operator + (const Binary<T> &second) {
  return Binary(this->to_int() + second.to_int());
}

template <class T>
Binary<T> Binary<T>::operator - (const Binary<T> &second) {
  return Binary(this->to_int() - second.to_int());
}

template <class T>
Binary<T> Binary<T>::operator * (const Binary<T> &second) {
  return Binary(this->to_int() * second.to_int());
}

template <class T>
Binary<T> Binary<T>::operator / (const Binary<T> &second) {
  return Binary(this->to_int() / second.to_int());
}

template <class T>
void print_answer(Binary<T> bin1, Binary<T> bin2) {
  (bin1 + bin2).show();
  std::cout << std::endl;
  (bin1 - bin2).show();
  std::cout << std::endl;
  (bin1 * bin2).show();
  std::cout << std::endl;
  (bin1 / bin2).show();
  std::cout << std::endl;
}

int main() {
  char type[9] = {};
  std::cin >> type;

  char line1[1000000] = {}, line2[1000000] = {};
  std::cin >> line1 >> line2;

  if (!strcmp(type, "INT")) {
    Binary<int> bin1(line1), bin2(line2);
    print_answer(bin1, bin2);
  } else if (!strcmp(type, "BOOL")) {
    Binary<bool> bin1(line1), bin2(line2);
    print_answer(bin1, bin2);
  } else if (!strcmp(type, "LONGLONG")) {
    Binary<long long> bin1(line1), bin2(line2);
    print_answer(bin1, bin2);
  } else if (!strcmp(type, "SHORT")) {
    Binary<short> bin1(line1), bin2(line2);
    print_answer(bin1, bin2);
  }

  return 0;
}