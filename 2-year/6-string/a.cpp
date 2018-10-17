#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin >> s;

    for (short i = 0; i < strlen(s); i++) {
        if (s[i] == 'e') {
            cout << 'i';
        } else {
            cout << s[i];
        }
    }

    cout << endl;
    return 0;
}