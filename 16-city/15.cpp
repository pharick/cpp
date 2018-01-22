#include <iostream>
using namespace std;

int main() {
  short n, k, monthEnd;
  cin >> n >> k;

  short weekDay = k;
  for (short month = 1; month <= 12; month++) {
    short day = 1;

    switch (month) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        monthEnd = 31;
        break;
      case 2:
        monthEnd = 28;
        break;
      default:
        monthEnd = 30;
    }

    while (day <= monthEnd) {
      if ((weekDay == 6 && (day == 5 || day == 6)) ||
          (weekDay == 4 && day % n == 0)) {
            cout << day << " of ";

            switch (month) {
              case 1:
                cout << "January"; break;
              case 2:
                cout << "February"; break;
              case 3:
                cout << "March"; break;
              case 4:
                cout << "April"; break;
              case 5:
                cout << "May"; break;
              case 6:
                cout << "June"; break;
              case 7:
                cout << "July"; break;
              case 8:
                cout << "August"; break;
              case 9:
                cout << "September"; break;
              case 10:
                cout << "October"; break;
              case 11:
                cout << "November"; break;
              case 12:
                cout << "December"; break;
            }
            cout << endl;
      }

      day++;
      weekDay++;
      if (weekDay > 7) weekDay = 1;
    }
  }

  return 0;
}
