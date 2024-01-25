/*-------------------------------------------------------------------
    2403. Positivo Negativo o Cero
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int numero;

    std::cin >> numero;

    if (numero > 0) {
        std::cout << "POSITIVO" << std::endl;
    } else if (numero < 0) {
        std::cout << "NEGATIVO" << std::endl;
    } else {
        std::cout << "CERO" << std::endl;
    }

    system("pause");
    return 0;
}