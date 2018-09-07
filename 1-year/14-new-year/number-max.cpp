#include <iostream>
using namespace std;

int main() {
    int number, number2, count = 0;
    cin >> number >> number2;

    while (number2 != 0) {
        if (number2 >= number) {
            count++;
        }

        number = number2;
        cin >> number2;
    }

    cout << count << endl;
    return 0;
}