#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin >> s;

    cout << (s[0] == s[strlen(s) - 1] ? "YES" : "NO") << endl;
    return 0;
}