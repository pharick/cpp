#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101] = {};
    cin.getline(str, 100);

    int first = -1, last = -1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'f') {
            if (first < 0) first = i;
            else last = i;
        }
    }

    if (first >= 0) cout << first;
    if (last >= 0) cout << " " << last;
    if (first >= 0) cout << endl;
    return 0;
}