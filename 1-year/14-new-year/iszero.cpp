#include <iostream>
using namespace std;

int main() {
    short n, number;
    cin >> n;

    bool iszero = false;
    for (short i = 0; i < n; i++) {
        cin >> number;
        if (number == 0) {
            iszero = true;
            break;
        }
    }

    cout << (iszero ? "YES" : "NO") << endl;
    return 0;
}