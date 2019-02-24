#include <iostream>

class Fraction {
    int x, y;
public:
    Fraction(int x = 0, int y = 1);
    int& operator [] (int i);
};

Fraction::Fraction(int x, int y) {
    this->x = x;
    this->y = y;
}

int& Fraction::operator [] (int i) {
    if (i == 0) return this->x;
    if (i == 1) return this->y;
    throw 1;
}

int main() {
    int x, y;
    std::cin >> x;
    std::cin.ignore(1, '/');
    std::cin >> y;
    Fraction fr(x, y);

    int i;
    std::cin >> i;
    std::cout << fr[i] << std::endl;

    return 0;
}