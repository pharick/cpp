#include <iostream>
using namespace std;

int main() {
    int n, p = 1, three = 0;
    bool sage;
    cin >> n >> sage;
    if (n < 0) n *= -1;

    while(p*10 <= n) p*= 10;

    do {
        int d = n/p;
        
        if (d == 3) three++;

        n %= p;
        p /= 10;
    } while (p);

    bool result = (three == 3);
    cout << (result == sage ? "YES" : "NO") << endl;
    return 0;
}