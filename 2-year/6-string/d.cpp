#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101] = {};
    cin >> str;

    bool first = false;
    short index = -2;

    for (short i = 0; i < strlen(str); i++) {
        if (str[i] == 'f') {
            if (first) {
                index = i;
                break;
            } else {
                index = -1;
                first = true;
            }
        }
    }

    cout << index << endl;
    return 0;
}