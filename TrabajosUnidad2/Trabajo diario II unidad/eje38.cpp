#include <iostream>

int main() {
    int acumulado = 0, indice = 0, arreglo[999];

    while (true) {
        std::cin >> arreglo[indice];
        if (arreglo[indice] == 0) break;
        ++indice;
    }

    for (int j = 0; j < indice; ++j) {
        for (int k = 1; k <= arreglo[j]; ++k) {
            acumulado += k;
        }
        std::cout << acumulado << std::endl;
        acumulado = 0;
    }

    system("pause");
    return 0;
}