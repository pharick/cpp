#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char *lines[102400] = {};

    int line_i = 0;
    while (!in.eof()) {
        char line[102401] = {};
        in.getline(line, 102401);
        lines[line_i] = new char[strlen(line) + 1];

        for (int i = 0; i < strlen(line) + 1; i++) {
            lines[line_i][i] = '\0';
        }

        strncpy(lines[line_i], line, strlen(line));

        line_i++;
    }

    for (int i = line_i - 2; i >= 0; i--) {
        out << lines[i] << endl;
    }

    for (int i = 0; i < line_i; i++) {
        delete [] lines[i];
    }

    in.close();
    out.close();
    return 0;
}