#include <iostream>
using namespace std;

int main() {
    unsigned int n, p = 1;
    cin >> n;

    while(p*10 <= n) p*= 10;

    unsigned int even = 0, odd = 0;
    do {
        int d = n/p;
        
        if (d % 2 == 0) even = even * 10 + d;
        else odd = odd * 10 + d;

        n %= p;
        p /= 10;
    } while (p);

    cout << even << odd << endl;
    return 0;
}