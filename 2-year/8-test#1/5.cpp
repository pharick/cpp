#include <iostream>
#include <cstring>
using namespace std;

int str_to_words(char str[], char words[200][201]) {
    char *word = {};
    int i = 0;
    do {
        word = strtok(word ? nullptr : str, " ");
        if (word) {
            strncpy(words[i], word, 100);
            i++;
        }
    } while (word);
    return i;
}

int main() {
    char str[201] = {};
    char words[200][201] = {};

    cin.getline(str, 200);

    int count = str_to_words(str, words);

    int length = 0;
    int id;
    for (int i = 0; i < count; i++) {
        int l = strlen(words[i]);
        if (l > length) {
            id = i;
            length = l;
        }
    }

    cout << words[id] << endl;
    return 0;
}