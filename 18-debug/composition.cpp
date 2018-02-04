#include <iostream>
using namespace std;

int main() {
    long long int n, m, i = 0,
                  min0 = 30000, min1 = 30000,
                  max0 = -30000, max1 = -30000, max2 = -30000;
    cin >> n;

    while (i < n) {
        cin >> m;

        if (m > max2) max2 = m;
        if (max2 > max1) {
            int tmp = max2;
            max2 = max1;
            max1 = tmp;
        }
        if (max1 > max0) {
            int tmp = max1;
            max1 = max0;
            max0 = tmp;
        }

        if (m < min1) min1 = m;
        if (min1 < min0) {
            int tmp = min1;
            min1 = min0;
            min0 = tmp;
        }

        i++;
    }

    long long int p0 = max0 * max1 * max2,
                  p1 = max0 * min0 * min1;

    if (p0 > p1) cout << max0 << " " << max1 << " " << max2;
    else cout << max0 << " " << min0 << " " << min1;

    cout << endl;
    return 0;
}
