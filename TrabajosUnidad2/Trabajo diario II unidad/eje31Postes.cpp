#include <iostream>
#include <algorithm>

int main() {
    int postes[1000000];
    int p, s, minimo = 1e8;

    std::cin >> s >> p;

    for (int i = 0; i < p; i++) {
        std::cin >> postes[i];
    }

    std::sort(postes, postes + p);

    for (int i = 0; i < p - s + 1; i++) {
        int UPoste = postes[i + s - 1];
        minimo = std::min(minimo, UPoste - postes[i]);
    }

    std::cout << minimo;

    system("pause");
    return 0;
}