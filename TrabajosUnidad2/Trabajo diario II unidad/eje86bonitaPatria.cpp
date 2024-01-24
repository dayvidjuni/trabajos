#include <iostream>

int main() {
    int t;
    std::cin >> t;

    if (t < 1 || t >= 40) {
        std::cout << "ERROR\n";
        return 0;
    }

    int m = 0, pos;
    for (int i = 1; i <= t; ++i) {
        int kid;
        std::cin >> kid;
        if (kid > m) {
            m = kid;
            pos = i;
        }
    }

    std::cout << pos << '\n';

    system("pause");
    return 0;
}
