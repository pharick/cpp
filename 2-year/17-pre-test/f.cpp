#include <iostream>
#include <cstring>
#include <cstdlib>

class Customer {
private:
  char name[101];
  int calls;
  int talk_seconds;
public:
  Customer();
  void call(Customer &to, int sec);
  int get_bill();
};

Customer::Customer() {
  strcpy(this->name, "Vasya");
}

void Customer::call(Customer &to, int sec) {
  this->calls++;
  this->talk_seconds += sec;
  to.calls++;
  to.talk_seconds += sec;
}

int Customer::get_bill() {
  int bill = 0;

  if (this->calls == 0) bill = 5000;
  else if (this->talk_seconds <= 30 * 60) bill = talk_seconds * 10;
  else bill = 30 * 60 * 10 + (talk_seconds - 30 * 60) * 7;

  if (this->calls > 20) bill += 15000;

  return bill;
}

int str_to_tokens(char str[], char tokens[100][101]) {
    char *token = {};
    int i = 0;
    do {
        token = strtok(token ? nullptr : str, " \n\r");
        if (token) {
            strncpy(tokens[i], token, 100);
            i++;
        }
    } while (token);
    return i;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  std::cin.ignore(8, '\n');

  Customer *customers = new Customer[n];

  char command[101] = {};
  char tokens[100][101] = {};

  for (int i = 0; i < m; i++) {
    std::cin.getline(command, 100);
    str_to_tokens(command, tokens);

    if (!strcmp(tokens[0], "status")) {
      int bill = customers[atoi(tokens[1]) - 1].get_bill();
      std::cout << bill / 100 << ' ' << bill % 100 << std::endl;
    } else if (!strcmp(tokens[1], "calls")) {
      int from = atoi(tokens[0]);
      int to = atoi(tokens[2]);
      int seconds = atoi(tokens[4]);
      customers[from - 1].call(customers[to - 1], seconds);
    }
  }

  return 0;
}