#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    if (s == 3) {
        cout << "WIN";
    }
    if (s == 1) {
        cout << "DRAW";
    }
    if (s == 0) {
        cout << "LOSE";
    }
    cout << endl;
    return 0;
}
