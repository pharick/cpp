#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101] = {};
    cin.getline(str, 101);

    char *word = {};
    int min_len = 101;
    int len;

    do {
        word = strtok(word ? nullptr : str, " \n\r");
        if (word) len = strlen(word);
        if (len < min_len) min_len = len;

        // cout << word << " " << len << endl;
    } while (word);
    
    cout << min_len << endl;
    return 0;
}