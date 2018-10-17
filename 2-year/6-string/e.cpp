#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isCrypto(char str[]) {
    bool eight_symbols = strlen(str) >= 8;
    if (eight_symbols) {
        bool numbers = false, lower_case = false, upper_case = false;
        
        for (short i = 0; i < strlen(str); i++) {
            if (!numbers) numbers = isdigit(str[i]);
            if (!lower_case) lower_case = islower(str[i]);
            if (!upper_case) upper_case = isupper(str[i]);

            if (numbers && lower_case && upper_case) return true;
        }
    }

    return false;
}

int main() {
    char str[101] = {};
    cin >> str;

    cout << (isCrypto(str) ? "YES" : "NO") << endl;
    return 0;
}