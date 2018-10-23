#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000000] = {};
    cin.getline(str, 1000000);

    char *word = {};

    do {
        word = strtok(word ? nullptr : str, " ");
        cout << word << endl;
    } while (word);
    
    return 0;
}