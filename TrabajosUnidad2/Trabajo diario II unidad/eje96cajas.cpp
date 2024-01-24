#include <iostream>
#include <vector>

int cajas[1000001];

int main() {
    int numCajas = 0;
    int entrada = 0;
    int mayor = 0;
    int contador = 0;

    std::cin >> numCajas;

    for (int i = 0; i < numCajas; i++) {
        std::cin >> entrada;
        cajas[entrada] += 1;
        mayor = std::max(mayor, entrada);
    }

    for (int i = 1; i <= mayor; i++) {
        if (cajas[i] == 0) {
            contador++;
        }
    }

    std::cout << (mayor - contador) << std::endl;

    return 0;
}
