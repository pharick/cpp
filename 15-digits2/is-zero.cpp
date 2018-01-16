#include <iostream>
using namespace std;

int main() {
    unsigned int n, p = 1, isZero = false;
    cin >> n;

    while(p*10 <= n) p*= 10;

    do {
        int d = n/p;
        
        if (d == 0) isZero = true;

        n %= p;
        p /= 10;
    } while (p && !isZero);

    cout << (isZero ? "YES" : "NO") << endl;
    return 0;
}