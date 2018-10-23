#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int get_numbers(char str[], int numbers[1000]) {
    char *token = {};
    int i = 0;
    do {
        token = strtok(token ? nullptr : str, "!\"#$%&'()*+,-./:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
        if (token) {
            numbers[i] = atoi(token);
            i++;
        }
    } while (token);
    return i;
}

int main() {
    char str[1001] = {};
    cin.getline(str, 1000);

    int numbers[1000] = {};
    int count = get_numbers(str, numbers);

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }

    cout << sum << endl;
    return 0;
}