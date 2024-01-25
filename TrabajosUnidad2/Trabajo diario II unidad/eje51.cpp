/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    
    int numero1, numero2;

    std::cin >> numero1;

    std::cin >> numero2;

    int multip = numero1 * numero2;
    int suma = numero1+numero2;
    int resta= numero1-numero2;
    int division=numero1/numero2;

    std::cout << suma << std::endl;
    std::cout << resta << std::endl;
    std::cout << division << std::endl;
    std::cout << multip << std::endl;

    system("pause");
    return 0;
}