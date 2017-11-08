#include <iostream>
using namespace std;

int main() {
    unsigned short n, m, x, y;
    cin >> n >> m >> x >> y;
    
    // n - короткий, m - длинный
    if (n > m) {
        unsigned short tmp = m;
        m = n;
        n = tmp;
    }

    unsigned short min = x;
    if (y < min) min = y;
    if (m - y < min) min = m - y;
    if (n - x < min) min = n - x;

    cout << min << endl;
    return 0;
}
