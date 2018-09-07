#include <iostream>
using namespace std;

int main() {
    short n, p=1;
    cin >> n;

    while(p*10 <= n) p*= 10;

    do {
        int d = n/p;

        if (d != 0 && d != 5)
            cout << d;

        n %= p;
        p /= 10;
    } while (p);

    cout << endl;
    return 0;
}
