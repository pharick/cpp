#include <iostream>
using namespace std;

int main() {
    unsigned short int c, d, result;
    cin >> c >> d;
    result = (c >= 0 && c <= 23) &&
             (d >=0 && d <= 59);
    cout << result << endl;
    return 0;
}
