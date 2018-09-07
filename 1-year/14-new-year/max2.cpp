#include <iostream>
using namespace std;

int main() {
    short max1, max2, n;
    cin >> max1 >> max2 >> n;
    if (max2 > max1) {
        short temp = max1;
        max1 = max2;
        max2 = temp;
    }

    while (n) {
        if (n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }

        cin >> n;
    }

    cout << max2 << endl;
    return 0;
}