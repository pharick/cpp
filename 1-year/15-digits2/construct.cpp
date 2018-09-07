#include <iostream>
using namespace std;

int main() {
    short count, digit;
    int number = 0;
    cin >> count;

    for (short i = 1; i <= count; i++) {
        cin >> digit;

        int pow = 1;
        for (short j = 0; j < i - 1; j++) pow *= 10;

        number += digit * pow;
    }

    cout << number << endl;
    return 0;
}