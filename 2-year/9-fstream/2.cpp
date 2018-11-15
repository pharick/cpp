#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream in("in.txt");

    char s = {};
    short count = 0;

    while (in.get(s)) {
        if (!isspace(s)) count++;
    }

    cout << count << endl;
    
    in.close();
    return 0;
}