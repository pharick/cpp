#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000000] = {};
    cin.getline(str, 1000000);

    char *word = {};
    word = strtok(str, " \r\n");

    do {
        cout << word;
        word = strtok(nullptr, " \r\n");
        if (word) cout << " ";
    } while (word);
    
    return 0;
}