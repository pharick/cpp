#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[256] = {};
    cin.getline(str, 255);

    bool new_word = true;
    short i = 0;
    while(str[i] != '.') {
        if (new_word) {
            cout << (char)toupper(str[i]);
            new_word = false;
        } else {
            cout << (char)tolower(str[i]);
        }
        if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == ':') new_word = true;
        i++;
    }

    cout << endl;
    return 0;
}