#include <iostream>
#include <iomanip>
#include <cmath>

class Fraction {
    int x, y;
public:
    Fraction(int x = 0, int y = 1);
    operator double();
    operator int();
};

Fraction::Fraction(int x, int y) {
    this->x = x;
    this->y = y;

    if (this->y < 0) {
        this->x = this->x * -1;
        this->y = this->y * -1;
    }
}

Fraction::operator double() {
    return this->x * 1.0 / this->y;
}

Fraction::operator int() {
    return floor(this->x * 1.0 / this->y);
}

int main() {
    int x, y;
    std::cin >> x;
    std::cin.ignore(1, '/');
    std::cin >> y;

    Fraction fr(x, y);

    std::cout << (int)fr << std::endl;
    return 0;
}