/* 5042. Duración de juego
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/

#include <iostream>

int main() {
    int hora_inicio, hora_terminacion;

    std::cin >> hora_inicio;

    std::cin >> hora_terminacion;

    int duracion;
    if (hora_inicio <= hora_terminacion) {
        duracion = hora_terminacion - hora_inicio;
    } else {
        duracion = 24 - hora_inicio + hora_terminacion;
    }

    std::cout  << duracion ;
    system("pause");
    return 0;
}