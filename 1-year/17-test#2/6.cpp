#include <iostream>
using namespace std;

int main() {
    short n, d, nod;
    cin >> n >> d;

    do {
        short a = n, b = d;

        while (a != 0 and b != 0) {
            if (a > b) a %= b;
            else b %= a;
        }

        nod = a + b;
        n /= nod;
        d /= nod;
    } while (nod != 1);

    cout << n << " " << d << endl;
    return 0;
}
