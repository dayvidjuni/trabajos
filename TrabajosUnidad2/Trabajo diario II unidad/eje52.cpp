#include <iostream>

int main() {

    int numero;

    std::cin >> numero;

    if (numero > 0) {

        int cantidadDivisores = 0;

        for (int i = 1; i <= numero; ++i) {
            if (numero % i == 0) {
                cantidadDivisores++;
            }
        }
        std::cout << cantidadDivisores << std::endl;
    } 
    system("pause");

    return 0;
}
