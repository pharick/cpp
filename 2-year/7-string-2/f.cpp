#include <iostream>
#include <cstring>
using namespace std;

int str_to_words(char str[], char words[100][101]) {
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
    char str[101] = {};
    cin.getline(str, 101);

    char words[100][101] = {};
    int count = str_to_words(str, words);

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (!strcmp(words[i], words[j])) {
                cout << words[i];
                break;
            }
        }
    }

    cout << endl;
    return 0;
}