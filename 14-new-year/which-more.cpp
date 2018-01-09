#include <iostream>
using namespace std;

int main() {
    int number, zero = 0, nine = 0;
    cin >> number;

    do {
        short digit = number % 10;
        if (digit == 0) zero++;
        else if (digit == 9) nine++;

        number /= 10;
    } while (number);

    cout << (zero > nine ? 0 : 9) << endl;
    return 0;
}