#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char line[1000] = {};

    while (line[strlen(line) - 1] != 'd' ||
           line[strlen(line) - 2] != 'n' ||
           line[strlen(line) - 3] != 'e') {
               in.get(line[strlen(line)]);
    }

    out << strlen(line) << endl;

    for (short i = 0; i < strlen(line); i++) {
        out << line[i];
        if (i < strlen(line) - 1) out << ' ';
    }
    
    out << endl;

    in.close();
    out.close();
    return 0;
}