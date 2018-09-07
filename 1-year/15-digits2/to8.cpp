#include <iostream>
using namespace std;

int main() {
    unsigned int n, p = 1;
    cin >> n;

    while(p*8 <= n) p*= 8;

    do {
        int d = n/p;
        
        cout << d;

        n %= p;
        p /= 8;
    } while (p);

    cout << endl;
    return 0;
}