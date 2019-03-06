#include <iostream>
#include <cstring>

class Fraction {
  long a, b;
public:
  Fraction(long a = 0, long b = 1): a(a), b(b) {}
  Fraction(const Fraction&);
  Fraction &operator = (Fraction&);
  friend std::istream &operator >> (std::istream&, Fraction&);
  friend std::ostream &operator << (std::ostream&, const Fraction&);
  bool operator > (const Fraction&);
};

Fraction::Fraction(const Fraction& tmp) {
  this->a = tmp.a;
  this->b = tmp.b;
}

Fraction &Fraction::operator = (Fraction& tmp) {
  this->a = tmp.a;
  this->b = tmp.b;
  return *this;
}

std::istream &operator >> (std::istream& in, Fraction& f) {
  in >> f.a;
  in.ignore(1, '/');
  in >> f.b;
  return in;
}

std::ostream &operator << (std::ostream& out, const Fraction& f) {
  std::cout << f.a << '/' << f.b;
  return out;
}

bool Fraction::operator > (const Fraction &b) {
  long a1 = this->a, b1 = this->b;
  long a2 = b.a, b2 = b.b;

  if (b1 < 0) {
    a1 *= -1;
    b1 *= -1;
  }

  if (b2 < 0) {
    a2 *= -1;
    b2 *= -1;
  }

  return a1 * b2 > b1 * a2;
}

template <class T>
class Array {
  int len;
  T *data;
public:
  Array(int len = 0): len(len) { data = new T[len]; }
  Array(const Array<T>&);
  ~Array() { delete [] data; }

  template <class U> friend std::istream &operator >> (std::istream&, Array<U>&);
  template <class U> friend std::ostream &operator << (std::ostream&, const Array<U>&);

  T &operator [] (int i) { return data[i]; }

  bool operator < (const Array& b) { return this->len < b.len; }

  void reverse();
  int length() { return len; }
};

template <>
class Array<char> {
  int len;
  char *data;
public:
  Array(int len = 0): len(len) { data = new char[len]; }
  Array(const Array<char>&);
  ~Array() { delete [] data; }

  template <class U> friend std::istream &operator >> (std::istream&, Array<U>&);
  template <class U> friend std::ostream &operator << (std::ostream&, const Array<U>&);

  char &operator [] (int i) { return data[i]; }

  bool operator < (const Array& b) { return strcmp(this->data, b.data) < 0; }

  void reverse();
  int length() { return len; }
};

template <class T>
Array<T>::Array(const Array<T>& tmp) {
  len = tmp.len;
  data = new T[len];
  for (int i = 0; i < len; i++) data[i] = tmp.data[i];
}

template <class T>
std::istream &operator >> (std::istream& in, Array<T>& arr) {
  std::cin >> arr.len;
  delete [] arr.data;
  arr.data = new T[arr.len];
  for (int i = 0; i < arr.len; i++) std::cin >> arr.data[i];
  return in;
}

template <class T>
std::ostream &operator << (std::ostream& out, const Array<T>& arr) {
  for (int i = 0; i < arr.len; i++) {
    std::cout << arr.data[i];
    if (i < arr.len - 1) std::cout << " ";
  }
  return out;
}

template <class T>
void Array<T>::reverse() {
  for (int i = 0; i < len / 2; i++) {
    T tmp = data[i];
    data[i] = data[len - i - 1];
    data[len - i - 1] = tmp;
  }
}

template <class L>
L array_max(Array<L> &d) {
  L max = d[0];
  for (int i = 1; i < d.length(); i++) {
    if (d[i] > max) max = d[i];
  }
  return max;
}

int main() {
  char type[9] = {};
  std::cin >> type;

  if (!strcmp(type, "INT")) {
    Array<int> arr1, arr2;
    std::cin >> arr1 >> arr2;
    std::cout << (arr1 < arr2 ? "YES" : "NO") << std::endl;
  } else if (!strcmp(type, "FRACTION")) {
    Array<Fraction> arr1, arr2;
    std::cin >> arr1 >> arr2;
    std::cout << (arr1 < arr2 ? "YES" : "NO") << std::endl;
  } else if (!strcmp(type, "CHAR")) {
    Array<char> arr1, arr2;
    std::cin >> arr1 >> arr2;
    std::cout << (arr1 < arr2 ? "YES" : "NO") << std::endl;
  }

  std::cout << std::endl;
  return 0;
}