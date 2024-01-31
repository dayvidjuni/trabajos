/*557. Deuda
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    unsigned long i = 0, longitud, acum = 0;

    std::cin >> longitud;
    unsigned int vec[longitud];

    while (i < longitud) {
        std::cin >> vec[i];
        i++;
    }

    i = 0;
    while (i < longitud) {
        acum += vec[i] + (vec[i] * ((vec[i] - 1) * 0.5));
        i++;
    }

    std::cout << acum;

    system("pause");
    return 0;
}
