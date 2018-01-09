#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;
    cin >> number;

    do {
        short digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    } while (number);

    cout << reversed << endl;
    return 0;
}