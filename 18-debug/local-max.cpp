#include <iostream>
using namespace std;

int main() {
    int prev, current, next, count = 0;
    cin >> prev >> current >> next;

    while (next != 0) {
        if (current > prev && current > next) count++;

        prev = current;
        current = next;
        cin >> next;
    }

    cout << count << endl;
    return 0;
}
