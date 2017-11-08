#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int res_a = a,
        res_b = b,
        res_c = c;
    if (a > b && a > c) res_a -= 5;
    if (b > a && b > c) res_b -= 5;
    if (c > a && c > b) res_c -= 5;
    cout << res_a << ' '
         << res_b << ' '
         << res_c << endl;
    return 0;
}
