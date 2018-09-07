#include <iostream>
using namespace std;

int main() {
    int number;
    short min = 9, count = 0;
    cin >> number;

    do {
        short digit = number % 10;
        if (digit < min) {
            min = digit;
            count = 0;
        }
        if (digit == min) count++;

        number /= 10;
    } while (number);

    cout << count << endl;
    return 0;
}