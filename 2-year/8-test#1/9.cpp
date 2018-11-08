#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

const char NO_LETTER = '0';

void remove_char(char *str, short index) {
    for (short i = index; i < strlen(str) - 1; i++) {
        str[i] = str[i+1];
    }
    str[strlen(str) - 1] = '\0';
}

void part_1(char *str) {
    for (short i = 0; i < strlen(str); i++) {
        if (str[i] == 'c') {
            if (str[i+1] == 'i' || str[i+1] == 'e') {
                str[i] = 's';
            } else if (str[i+1] == 'k') {
                remove_char(str, i);
            } else {
                str[i] = 'k';
            }
        } else if (str[i] == 'C') {
            if (str[i+1] == 'i' || str[i+1] == 'e') {
                str[i] = 'S';
            } else if (str[i+1] == 'k') {
                remove_char(str, i);
                str[i] = 'K';
            } else {
                str[i] = 'K';
            }
        }
    }
}

void part_2(char *str) {
    for (short i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == tolower(str[i+1]) && isalpha(str[i])) {
            if (str[i] == 'e') {
                str[i] = 'i';
                remove_char(str, i+1);
            } else if (str[i] == 'E') {
                str[i] = 'I';
                remove_char(str, i+1);
            } else if (str[i] == 'o') {
                str[i] = 'u';
                remove_char(str, i+1);
            } else if (str[i] == 'O') {
                str[i] = 'U';
                remove_char(str, i+1);
            } else {
                remove_char(str, i+1);
            }

            i--;
        }
    }
}

void part_3(char *str) {
    for (short i = 0; i < strlen(str); i++) {
        if (str[i] == 'e' && isalpha(str[i-1]) && !isalpha(str[i+1])) {
            remove_char(str, i);
            i--;
        }
    }
}

void part_4(char *str) {
    for (short i = 0; i < strlen(str); i++) {
        if ((str[i] == 'a' || str[i] == 'A') && !isalpha(str[i-1]) && !isalpha(str[i+1])) {
            remove_char(str, i);

            if (str[i] == ' ') {
                remove_char(str, i);
            }

            i--;
        } else if ((str[i] == 'a' || str[i] == 'A') && !isalpha(str[i-1]) && str[i+1] == 'n' && !isalpha(str[i+2])) {
            remove_char(str, i);
            remove_char(str, i);

            if (str[i] == ' ') {
                remove_char(str, i);
            }

            i--;
        } else if ((str[i] == 't' || str[i] == 'T') && !isalpha(str[i-1]) && str[i+1] == 'h' && str[i+2] == 'e' && !isalpha(str[i+3])) {
            remove_char(str, i);
            remove_char(str, i);
            remove_char(str, i);

            if (str[i] == ' ') {
                remove_char(str, i);
            }

            i--;
        }
    }
}

int main() {
    char str[201] = {};
    cin.getline(str, 200);

    part_4(str);
    part_1(str);
    part_2(str);
    part_2(str);
    part_3(str);

    cout << str << endl;
    return 0;
}