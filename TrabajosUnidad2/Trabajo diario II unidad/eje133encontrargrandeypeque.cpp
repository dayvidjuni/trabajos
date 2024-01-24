#include <iostream>

int main() {
    int cantidadNumeros, numero, maximo, minimo;

    std::cin >> cantidadNumeros;
    
    std::cin >> numero;
    maximo = minimo = numero;

    for (int i = 1; i < cantidadNumeros; i++) {
        std::cin >> numero;

        if (numero < minimo) {
            minimo = numero;
        }

        if (numero > maximo) {
            maximo = numero;
        }
    }

    std::cout << maximo << minimo << std::endl;

    system("pause");
    return 0;
}