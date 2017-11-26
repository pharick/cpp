#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a % 2 != 0) &&
             (b % 2 != 0) &&
             (c % 2 != 0))
         << endl;
    return 0;
}
