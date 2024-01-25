/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int cantidad_anios;
    std::cin >> cantidad_anios;

    for (int i = 0; i < cantidad_anios; ++i) {
        int anio;
        std::cin >> anio;

        char respuesta = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) ? 'S' : 'N';
        std::cout << respuesta << '\n';
    }
    system("pause");
    return 0;
}