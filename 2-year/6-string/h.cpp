#include <iostream>
#include <cstring>
using namespace std;

bool is_correct_braces(char str[]) {
    bool br_open = false;

    for (short i = 0; i < strlen(str); i++) {
        if (str[i] == '(') {
            if (br_open) return false;
            br_open = true;
        } else if (str[i] == ')') {
            if (!br_open) return false;
            br_open = false;
        }
    }

    return !br_open;
}

int main() {
    char str[501] = {};
    cin.getline(str, 500);
    cout << (is_correct_braces(str) ? "YES" : "NO") << endl;
    return 0;
}