#include <iostream>
using namespace std;

int main() {
  short int d, m;
  cin >> d >> m;

  short int t = d + m*30;

  if (t >= 50 && t <= 78) cout << "Aquarius";
  else if (t >= 79 && t <= 110) cout << "Pisces";
  else if (t >= 111 && t <= 139) cout << "Aries";
  else if (t >= 140 && t <= 170) cout << "Taurus";
  else if (t >= 171 && t <= 201) cout << "Gemini";
  else if (t >= 202 && t <= 232) cout << "Cancer";
  else if (t >= 233 && t <= 262) cout << "Leo";
  else if (t >= 263 && t <= 292) cout << "Virgo";
  else if (t >= 293 && t <= 322) cout << "Libra";
  else if (t >= 323 && t <= 352) cout << "Scorpio";
  else if (t >= 353 && t <= 381) cout << "Sagittarius";
  else if (t >= 382 || t <= 49) cout << "Capricorn";

  cout << endl;
  return 0;
}
