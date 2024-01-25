/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <string>

int main() {
    std::string input;

    int numero;

    std::cin >> numero >> input;

    if (numero > 10) {
        std::cout << input[0] << numero - 2 << input.back();
    } else {
        std::cout << input;
    }

    system("pause");
    return 0;
}