#include <iostream>
#include <cstring>
using namespace std;

int str_to_words(char str[], char words[100][100]) {
    char *word = {};
    int i = 0;
    do {
        word = strtok(word ? nullptr : str, " \n\r");
        if (word) {
            strncpy(words[i], word, 100);
            i++;
        }
    } while (word);
    return i;
}

int main() {
    char str[101] = {}, words[100][100];
    cin.getline(str, 100);

    int count = str_to_words(str, words);
    short s_count = 0;

    for (short i = 0; i < count; i++) {
        for (short j = 0; j < strlen(words[i]); j++) {
            if (words[i][j] == 's') {
                s_count++;
                break;
            }
        }
    }

    float result = s_count * 1.0 / count;

    if (result >= 0.2) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}