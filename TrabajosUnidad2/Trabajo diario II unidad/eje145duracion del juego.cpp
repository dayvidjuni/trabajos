/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <iostream>

int main() {
    int horaInicio, horaTerminacion;

    std::cin >> horaInicio;

    std::cin >> horaTerminacion;

    int duracionJuego;

    if (horaInicio <= horaTerminacion) {
        duracionJuego = horaTerminacion - horaInicio;
    } else {
        duracionJuego = 24 - horaInicio + horaTerminacion;
    }

    std::cout << duracionJuego;

    system("pause");
    return 0;
}