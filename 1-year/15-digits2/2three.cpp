#include <iostream>
using namespace std;

int main() {
    unsigned int n, p = 1, three = 0;
    cin >> n;

    while(p*10 <= n) p*= 10;

    do {
        int d = n/p;
        
        if (d == 3) three++;
        else three = 0; 

        n %= p;
        p /= 10;
    } while (p && three < 2);

    cout << (three == 2 ? "YES" : "NO") << endl;
    return 0;
}