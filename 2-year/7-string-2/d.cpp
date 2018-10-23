#include <iostream>
#include <cstring>
using namespace std;

void remove_spaces(char str[100], char new_str[100]) {
    for (int i = 0, j = 0; i < strlen(str); i++, j++) {
        if (str[i] == ' ') {
            j--;
        } else {
            new_str[j] = str[i];
        }
    }
}

bool is_palindrom(char *str) {
    for (int i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--) {
        if (str[i] != str[j]) return false;
    }
    return true;
}

int main() {
    char str[101] = {}, new_str[101] = {};
    cin.getline(str, 100);
    
    remove_spaces(str, new_str);
    cout << (is_palindrom(new_str) ? "YES" : "NO") << endl;
    return 0;
}