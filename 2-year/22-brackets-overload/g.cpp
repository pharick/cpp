#include <iostream>
#include <iomanip>

class Fraction {
    int x, y;
public:
    Fraction(int x = 0, int y = 1);
    operator double();
};

Fraction::Fraction(int x, int y) {
    this->x = x;
    this->y = y;
}

Fraction::operator double() {
    return this->x * 1.0 / this->y;
}

int main() {
    int x, y;
    std::cin >> x;
    std::cin.ignore(1, '/');
    std::cin >> y;

    Fraction fr(x, y);

    std::cout << std::fixed << std::setprecision(6) << (double)fr << std::endl;
    return 0;
}