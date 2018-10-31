#include <iostream>
#include <cstring>
using namespace std;

bool isOct(const char* str) {
    if (str[0] == '0') return false;
    for (int i = 0; i < strlen(str); i++) {
        if (!(str[i] >= 48 && str[i] <= 55)) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[301] = {};
    cin.getline(str, 300);

    cout << (isOct(str) ? "YES" : "NO") << endl;
    return 0;
}