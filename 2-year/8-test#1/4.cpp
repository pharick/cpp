#include <iostream>
#include <cstring>
using namespace std;

int count_words(char str[]) {
    char *word = {};
    int i = 0;
    do {
        word = strtok(word ? nullptr : str, " \n\r");
        if (word) i++;
    } while (word);
    return i;
}

int main() {
    char str[256] = {};
    cin.getline(str, 255);

    cout << count_words(str) << endl;
    return 0;
}