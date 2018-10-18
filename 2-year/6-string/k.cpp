#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100001] = {};
    cin.getline(str, 100000);

    int smiles = 0;
    bool smile_starts = false;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ';' || str[i] == ':') {
            smile_starts = true;
        } else if (smile_starts &&
                  (str[i] == ')' ||
                   str[i] == ']' ||
                   str[i] == '(' ||
                   str[i] == '[')) {
            smiles++;
            smile_starts = false;
        } else if (str[i] != '-') {
            smile_starts = false;
        }
    }

    cout << smiles << endl;
    return 0;
}