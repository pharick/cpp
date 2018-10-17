#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    short n;
    char l, str[10000] = {};

    cin >> n >> l >> str;

    float count = 0;
    for (short i = 0; i < n; i++) {
        if (str[i] == l) count++;
    }

    cout << fixed << setprecision(6)
         << count / n << endl;
    return 0;
}