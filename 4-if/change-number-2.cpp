#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool cond1 = false, cond2 = false;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        a *= a;
        b *= b;
        c *= c;

        cond1 = true;
    }
    if (a > b && b > c && !cond1) {
      b = c = a;

      cond2 = true;
    }
    if (!cond1 && !cond2) {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    cout << a << ' '
         << b << ' '
         << c << endl;
    return 0;
}
