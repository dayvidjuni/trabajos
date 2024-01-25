/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int cantidadPersonas;

    std::cin >> cantidadPersonas;

    if (cantidadPersonas <= 0) {
        return 0;
    }

    int mayorEdad = 0;

    for (int i = 1; i <= cantidadPersonas; ++i) {
        int edad;
        std::cin >> edad;

        if (edad > mayorEdad) {
            mayorEdad = edad;
        }
    }

    std::cout << mayorEdad << std::endl;

    system("pause");
    return 0;
}
