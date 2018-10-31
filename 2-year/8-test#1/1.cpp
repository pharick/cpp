#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101] = {};
    cin.getline(str, 100);

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.' ||
            str[i] == ',' ||
            str[i] == ';' ||
            str[i] == ':' ||
            str[i] == '!' ||
            str[i] == '?') {
                count++;
            }
    }

    cout << count << endl;
    return 0;
}