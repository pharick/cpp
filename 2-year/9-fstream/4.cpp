#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char line[101] = {};

    short count = 0;
    while (in.getline(line, 100)) {
        count++;
        if (count != 3) out << line << endl;
    }

    in.close();
    out.close();
    return 0;
}