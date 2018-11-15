#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char lines[2000][2000];

    int line_i = 0;
    while (in.getline(lines[line_i], 1000)) line_i++;

    for (int i = line_i - 1; i >= 0; i--) {
        out << lines[i] << endl;
    }

    in.close();
    out.close();
    return 0;
}