/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    
    int anio;//lo raro que se hace poner anio jajajaj
    char respuesta;

    while (std::cin >> anio) {
        respuesta = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) ? 'S' : 'N';
        std::cout << respuesta << '\n';
    }

    system("pause");
    return 0;
}
