/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int calificacion;

    std::cin >> calificacion;
    if (calificacion == 10) {
        std::cout << "Excelente" << std::endl;
    } else if (calificacion == 9) {
        std::cout << "Muy bien" << std::endl;
    } else if (calificacion == 8) {
        std::cout << "Bien" << std::endl;
    } else if (calificacion == 7) {
        std::cout << "Regular" << std::endl;
    } else if (calificacion == 6) {
        std::cout << "Suficiente" << std::endl;
    } else if (calificacion >= 0 && calificacion <= 5) {
        std::cout << "No acredita" << std::endl;
    } else {
        std::cout << "La calificación ingresada no es válida." << std::endl;
    }

    system("pause");
    return 0;
}
