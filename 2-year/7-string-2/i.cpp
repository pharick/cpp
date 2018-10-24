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

int words_length(char words[100][101], int count) {
    int length = 0;
    for (int i = 0; i < count; i++) {
        length += strlen(words[i]);
    }
    return length;
}

void out_spaces(int count) {
    for (int i = 0; i < count; i++) cout << ' ';
}

int main() {
    int need_length;
    char str[101] = {}, words[100][101] = {};
    cin >> need_length;
    cin.ignore(256, '\n');
    cin.getline(str, 100);

    int count = str_to_words(str, words);
    int length = words_length(words, count);
    
    int spaces = 0, extra_spaces = 0;
    if (count != 1) {
        spaces = (need_length - length) / (count - 1);
        extra_spaces = (need_length - length) % (count - 1);
    }

    for (int i = 0; i < count; i++) {
        if (i != 0) {
            out_spaces(spaces);

            if (extra_spaces) {
                cout << ' ';
                extra_spaces--;
            }
        }
        
        cout << words[i]; 
    }
    
    cout << endl;
    return 0;
}