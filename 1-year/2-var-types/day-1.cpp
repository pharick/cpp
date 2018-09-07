#include <iostream>

using namespace std;

int main() {
    unsigned short int k, d;
    cin >> k;
    d = (k - 1) % 7 + 1;
    cout << d << endl;
    return 0;
}
