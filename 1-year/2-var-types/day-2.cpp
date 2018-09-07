#include <iostream>

using namespace std;

int main() {
    unsigned short int k, d, r;
    cin >> k >> d;
    k += d - 1;
    r = (k - 1) % 7 + 1;
    cout << r << endl;
    return 0;
}
