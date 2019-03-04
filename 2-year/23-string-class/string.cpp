#include <iostream>
#include <cstring>

void sanitize_str(char *str) {
  int len = strlen(str);
  if (str[len - 1] == '\n' || str[len - 1] == '\r') str[len - 1] = '\0';
  if (str[len - 2] == '\n' || str[len - 2] == '\r') str[len - 2] = '\0';
}

class String {
  int len;
  char *str;
public:
  String();
  String(const char *str);
  ~String();

  String(const String&);
  String& operator = (const String &);

  friend std::istream& operator >> (std::istream&, String&);
  friend std::ostream& operator << (std::ostream&, const String&);

  int length() { return this->len; }

  char& operator [] (int i);
  String operator () (int index);

  String operator + (const String&);
  String operator * (const int);

  bool operator == (const String& b) { return !strcmp(this->str, b.str); }
  bool operator != (const String& b) { return strcmp(this->str, b.str); }
  bool operator < (const String& b) { return strcmp(this->str, b.str) < 0; }
  bool operator <= (const String& b) { return strcmp(this->str, b.str) <= 0; }
  bool operator > (const String& b) { return strcmp(this->str, b.str) > 0; }
  bool operator >= (const String& b) { return strcmp(this->str, b.str) >= 0; }

  int find(const String t);
};

String::String() {
  this->len = 0;
  this->str = nullptr;
}

String::String(const String &tmp) {
  this->len = tmp.len;
  this->str = new char[this->len + 1];
  strncpy(this->str, tmp.str, this->len);
  this->str[this->len] = '\0';
}

String::String(const char *str) {
  this->len = strlen(str);
  this->str = new char[this->len + 1];
  strncpy(this->str, str, this->len);
  this->str[this->len] = '\0';
}

String::~String() {
  delete [] this->str;
}

String& String::operator = (const String& tmp) {
  this->len = tmp.len;
  delete [] this->str;
  this->str = new char[this->len + 1];
  strncpy(this->str, tmp.str, this->len);
  this->str[this->len] = '\0';
  return *this;
}

std::istream& operator >> (std::istream& in, String& str) {
  char c_str[100001] = {};
  in.getline(c_str, 100000);
  sanitize_str(c_str);
  str = String(c_str);
  return in;
}

std::ostream& operator << (std::ostream& out, const String& str) {
  out << str.str;
  return out;
}

char& String::operator [] (int i) {
  return this->str[i];
}

String String::operator + (const String& b) {
  int new_len = this->len + b.len + 1;

  char *new_cstr = new char[new_len];
  for (int i = 0; i < new_len; i++) new_cstr[i] = '\0';

  strcat(new_cstr, this->str);
  strcat(new_cstr, b.str);

  String new_str(new_cstr);
  delete [] new_cstr;

  return new_str;
}

String String::operator * (const int n) {
  String new_str = *this;
  for (int i = 0; i < n - 1; i++) new_str = new_str + *this;
  return new_str;
}

int String::find(const String t) {
  char* ptr = strstr(this->str, t.str);
  if (ptr) return ptr - this->str;
  return -1;
}

String String::operator () (int index) {
  char *tmp = new char[this->len + 1];
  strncpy(tmp, this->str, this->len);

  char *tok = strtok(tmp, " \n\r");
  for (int i = 0; i < index; i++) tok = strtok(nullptr, " \n\r");

  String str_tok = tok ? String(tok) : String();

  delete [] tmp;

  return str_tok;
}

int main() {
  String str;
  std::cin >> str;

  String max = str(0);
  int i = 1;
  String substr = str(i);
  while (substr.length()) {
    if (substr > max) max = substr;
    i++;
    substr = str(i);
  }

  std::cout << max << std::endl;
}