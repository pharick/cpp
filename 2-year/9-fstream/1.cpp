#include <fstream>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    short a, b;
    in >> a >> b;

    out << a + b << endl << a - b << endl << a * b << endl;

    in.close();
    out.close();
    return 0;
}