#include <iostream>
using namespace std;

int main() {
    unsigned short start, end;
    cin >> start >> end;

    while (start != end) {
        if (start % 2 == 0 && start / 2 >= end) {
            cout << ":2" << endl;
            start /= 2;
        } else {
            cout << "-1" << endl;
            start -= 1;
        }
    }
    return 0;
}


