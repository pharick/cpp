#include <iostream>
using namespace std;

int main() {
    short int x, y, result;
    cin >> x >> y;
    result = (x > 1 && x < 4) &&
             (y > 2 && y < 7);
    cout << result << endl;
    return 0;
}
