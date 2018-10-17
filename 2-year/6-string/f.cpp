#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101] = {}, new_str[101] = {};
    cin >> str;

    short l_index = -1;
    for (short i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == 'l') {
            l_index = i;
            break;
        }
    }

    for (short i = 0; i < strlen(str); i++) {
        if (i != l_index) cout << str[i];
    }

    cout << new_str << endl;
    return 0;
}