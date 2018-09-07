#include <iostream>
using namespace std;

int main() {
  short n, age, best = 0, bestAge = 0;
  int income, bestIncome = 0;
  cin >> n;

  for (short i = 1; i <= n; i++) {
    cin >> age >> income;
    if (age <= 12) continue;

    if (bestAge <=12) {
      best = i;
      bestAge = age;
      bestIncome = income;
    } else if (bestAge >= 30) {
      if ((age >= 30 && income > bestIncome) ||
          (age < 30 && income - bestIncome >= 100000)) {
            best = i;
            bestAge = age;
            bestIncome = income;
      }
    } else {
      if ((age < 30 && (age > bestAge || income > bestIncome)) ||
          (age >= 30 && income - bestIncome < 100000)) {
            best = i;
            bestAge = age;
            bestIncome = income;
      }
    }
  }

  cout << best << endl;
  return 0;
}
