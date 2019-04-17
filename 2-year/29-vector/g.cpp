#include <iostream>
#include <vector>

class Barge {
    std::vector<int> *cells;
    int capacity;
    int n;

public:
    Barge(int k, int p);
    bool push(int cell, int barell);
    int pop(int cell);
    int size() { return n; }
    ~Barge();
};

Barge::Barge(int k, int p): capacity(p), n(0) {
    cells = new std::vector<int>[k];
}

bool Barge::push(int cell, int barell) {
    if (n >= capacity) return false;
    cells[cell - 1].push_back(barell);
    n++;
    return true;
}

int Barge::pop(int cell) {
    if (!cells[cell - 1].size()) return -1;
    int barell = cells[cell - 1].back();
    cells[cell - 1].pop_back();
    n--;
    return barell;
}

Barge::~Barge() {
    delete [] cells;
}

int main() {
    int n, k, p;
    std::cin >> n >> k >> p;

    Barge barge(k, p);

    char command;
    int a, b;
    int max = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> command >> a >> b;
        
        if (command == '+') {
            if (!barge.push(a, b)) {
                std::cout << "Error" << std::endl;
                return 0;
            }
        } else if (command == '-') {
            int barell = barge.pop(a);
            
            if (barell != b) {
                std::cout << "Error" << std::endl;
                return 0;
            }
        }

        if (barge.size() > max) max = barge.size();
    }

    if (barge.size() != 0) {
        std::cout << "Error" << std::endl;
    } else {
        std::cout << max << std::endl;
    }

    return 0;
}