#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[201] = {};
    cin.getline(str, 200);

    short spaces = 0, max_spaces = 0;

    for (short i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ') {
            spaces++;
        } else {
            if (spaces > max_spaces) max_spaces = spaces;
            spaces = 0;
        }
    }

    cout << max_spaces << endl;
    return 0;
}