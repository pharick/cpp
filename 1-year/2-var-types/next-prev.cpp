#include <iostream>

using namespace std;

int main() {
    short int n;
    cin >> n;
    cout << "The next number for the number " << n << " is " << n + 1 << "!" << endl
         << "The previous number for the number " << n << " is " << n - 1 << "!" << endl;
    return 0;
}