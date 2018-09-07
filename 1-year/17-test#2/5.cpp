#include <iostream>
using namespace std;

int main() {
    short max1, max2, n, d;
    cin >> n;
    cin >> max1 >> max2;
    n -= 2;
    if (max2 > max1) {
        short temp = max1;
        max1 = max2;
        max2 = temp;
    }

    while (n) {
      cin >> d;
        if (d > max1) {
            max2 = max1;
            max1 = d;
        } else if (d > max2) {
            max2 = d;
        }
        n--;
    }

    cout << max1 << " " << max2 << endl;
    return 0;
}
