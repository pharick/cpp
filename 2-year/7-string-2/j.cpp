#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

long dec_to_bin(int n) {
    long bin = 0, dig = 0;
    while (n >= 2) {
        bin += pow(10, dig) * (n % 2);
        n /= 2;
        dig++;
    }
    bin += pow(10, dig) * n;
    return bin;
}

int str_to_words(char str[], char words[255][256]) {
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
    char str[256] = {}, words[255][256] ={};
    cin.getline(str, 255);

    char num_str[10] = {};
    int num_str_i = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            num_str[num_str_i] = str[i];
            num_str_i++;
        } else {
            num_str[num_str_i] = '\0';
            if (num_str[0] != '\0') cout << dec_to_bin(atoi(num_str));
            num_str_i = 0;
            cout << str[i];
        }
    }
    if (num_str[0] != '\0') cout << dec_to_bin(atoi(num_str));

    cout << endl;
    return 0;
}