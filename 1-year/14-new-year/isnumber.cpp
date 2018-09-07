#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    bool isnumber = false;
    do {
        short digit = number % 10;
        if (digit == 3) {
            isnumber = true;
            break;
        }
        number /= 10;
    } while (number);

    cout << (isnumber ? "YES" : "NO") << endl;
    return 0;
}