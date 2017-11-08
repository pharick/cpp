#include <iostream>
using namespace std;

int main() {
    short n, m, n_abs, m_abs;
    cin >> n >> m;
    n_abs = n;
    m_abs = m;
    if (n_abs < 0) n_abs *= -1;
    if (m_abs < 0) m_abs *= -1;
    if (n_abs > m_abs) n -= 100;
    cout << n << ' ' << m << endl;
    return 0;
}
