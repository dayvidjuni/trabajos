/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int numVentas;
    int cantidad, precioUnitario, totalCobrado = 0;

    std::cin >> numVentas;

    for (int i = 0; i < numVentas; i++) {
        std::cin >> cantidad;
        std::cin >> precioUnitario;
        totalCobrado += cantidad * precioUnitario;
    }

    std::cout << totalCobrado << std::endl;
    system("pause");
    return 0;
}
