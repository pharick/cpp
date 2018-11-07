#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char str[256] = {};
    cin.getline(str, 255);

    bool non_digits = false, comma = false, minus = false;

    for (short i = 0; i < strlen(str); i++) {
        if (!(str[i] == '.' || str[i] == ',' || str[i] == '-' || isdigit(str[i]))) {
            non_digits = true;
            break;
        }
    }

    if (non_digits) {
        cout << "string";
    } else {
        for (short i = 0; i < strlen(str); i++) {
            if (str[i] == '.' || str[i] == ',') {
                if (i == 0 || i == strlen(str) - 1 || comma) {
                    non_digits = true;
                    break;
                } else {
                    comma = true;
                }
            }

            if (str[i] == '-') {
                if (i != 0 || minus) {
                    non_digits = true;
                    break;
                } else {
                    minus = true;
                }
            }
        }

        if (non_digits) {
            cout << "string";
        } else if (comma) {
            cout << "real";
        } else {
            if ((str[0] == '0' && strlen(str) > 1) || (minus && str[1] == '0')) {
                cout << "string";
            } else {
                cout << "integer";
            }
        }
    }

    cout << endl;
    return 0;
}