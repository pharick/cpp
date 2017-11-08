#include <iostream>
using namespace std;

int main() {
    unsigned short int h, result;
    cin >> h;
    result = (h >= 8);
    result += (h >= 11);
    result += (h >= 18);
    cout << result << endl;
    return 0;
}
