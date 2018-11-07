#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[102] = {};
    cin.getline(str, 101);

    // cout << str << endl;

    bool abc = true, bbs = false, repeats = false;

    for (short i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c') {
            abc = false;
            break;
        }
    }

    if (abc) {
        for (short i = 0; i < strlen(str) - 1; i++) {
            // cout << str[i] << " " << str[i + 1] << endl;

            if (str[i] == 'b' && str[i + 1] == 'b') {
                bbs = true;
                break;
            }
        }
    }

    if (abc && !bbs) {
        for (short len = 1; len <= strlen(str) / 3; len++) {
            for (short start = 0; start + len * 3 <= strlen(str); start++) {
                char substr1[35] = {}, substr2[35] = {}, substr3[35] = {};
                strncpy(substr1, str + start, len);
                strncpy(substr2, str + start + len, len);
                strncpy(substr3, str + start + len * 2, len);

                // cout << substr1 << " " << substr2 << " " << substr3 << endl;
                
                if (strcmp(substr1, substr2) == 0 && strcmp(substr2, substr3) == 0) {
                    repeats = true;
                    break;
                }
            }
        }
    }

    cout << ((abc && !repeats && !bbs) ? "YES" : "NO") << endl;
    return 0;
}