/*4 Requerir al usuario que ingrese un número entero positivo e imprimir todos los números 
correlativos entre el ingresado por el usuario y uno menos del doble del mismo.*/

#include <iostream>

int main() {

    int numero;

    inicio:

    std::cout << "por favor, Ingrese un numero entero positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "el numero debe ser positivo, intenta de nuevoz\n\n";
        goto inicio;
    }

    std::cout << "Numeros correlativos entre " << numero << " y " << (2 * numero - 1) << ":\n\n";
    
    for (int i = numero; i < 2 * numero; ++i) {
        std::cout << i << " ";
    }
    std::cout<<"\n\n";
    system("pause");
    return 0;
}