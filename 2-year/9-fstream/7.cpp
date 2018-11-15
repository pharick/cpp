#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream in("in.txt");

    short count = 0;
    bool dig_start = false;
    char symbol;

    while (in.get(symbol)) {

        if (isdigit(symbol)) {
            if (!dig_start) {
                count++;
                dig_start = true;
            }
        } else {
            dig_start = false;
        }
    }

    cout << count << endl;
    in.close();
    return 0;
}