/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>

int main() {

    int numOperaciones;
    std::cin >> numOperaciones;

    int suma = 0;
    
    for (int i = 0; i < numOperaciones; ++i) {
        char operacion;
        int numero;
        std::cin >> operacion >> numero;

        
        if (operacion == '+') {
            suma += numero;
        } else if (operacion == '-') {
            suma -= numero;
        } else if (operacion == '*') {
            suma *= numero;
        } else if (operacion == '/') {
            suma = std::ceil(static_cast<double>(suma) / numero);
        }
    }

    std::cout << suma << std::endl;

    system("pause");
    return 0;
}
