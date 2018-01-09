#include <iostream>
using namespace std;

int main() {
    int number;
    short max = 0;
    cin >> number;

    do {
        short digit = number % 10;
        if (digit > max) max = digit;
        number /= 10;
    } while (number);

    cout << max << endl;
    return 0;
}