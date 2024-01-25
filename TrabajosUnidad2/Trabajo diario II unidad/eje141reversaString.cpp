/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <string>

int main() {
    std::string original, invertida;

    std::getline(std::cin, original);

    for (int i = original.length() - 1; i >= 0; --i) {
        invertida += original[i];
    }

    std::cout << invertida ;
    system("pause");
    return 0;
}