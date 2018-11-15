#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    char line[10001] = {}, line3[10001] = {};
    short line_count = 0, char_count = 0; 

    while (in.getline(line, 10000)) {
        line_count++;
        char_count += strlen(line);
        if (line_count == 3) {
            strcpy(line3, line);
        }
    }

    out << line_count << endl;
    out << char_count - line_count + 1 << endl;
    out << (strlen(line3) > 0 ? line3 : "0") << endl;

    in.close();
    out.close();
    return 0;
}