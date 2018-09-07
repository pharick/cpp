#include <iostream>
using namespace std;

int main() {
    short number, max, count = 0;
    cin >> number;
    max = number;

    while (number != 0) {
        if (number > max) {
            max = number;
            count = 0;
        }
        if (number == max) count++;

        cin >> number;
    }

    cout << count << endl;
    return 0;
}