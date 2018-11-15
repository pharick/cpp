#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char line[10001] = {};

    while (in.getline(line, 10000)) {
        if (!in.eof()) out << line << endl;
    }

    in.close();
    out.close();
    return 0;
}