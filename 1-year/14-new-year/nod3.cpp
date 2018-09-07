#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    while (n1 && n2) {
        if (n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    
    n2 += n1;

    while (n2 && n3) {
        if (n2 > n3) n2 = n2 % n3;
        else n3 = n3 % n2;
    }

    cout << n2 + n3 << endl;
    return 0;
}