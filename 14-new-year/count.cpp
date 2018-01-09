#include <iostream>
using namespace std;

int main() {
    short number, count = 0;

    do {
        cin >> number;
        if (number != 0) count++;
    } while (number != 0);

    cout << count << endl;
    return 0;
}