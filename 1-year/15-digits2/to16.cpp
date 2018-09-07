#include <iostream>
using namespace std;

int main() {
    unsigned int n, p = 1;
    cin >> n;

    while(p*16 <= n) p*= 16;

    do {
        int d = n/p;
        
        switch (d) {
            case 10: cout << "A"; break;
            case 11: cout << "B"; break;
            case 12: cout << "C"; break;
            case 13: cout << "D"; break;
            case 14: cout << "E"; break;
            case 15: cout << "F"; break;
            case 16: cout << "G"; break;
            default: cout << d;
        }

        n %= p;
        p /= 16;
    } while (p);

    cout << endl;
    return 0;
}