/*2984. Monumento
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long int i, numero, c, ant = 0, act = 1;

    std::cin >> numero;

    for (i = 0; i < numero; i++) {
        c = (ant + act) % 1000000;

        ant = act;
        act = c;
    }

    std::cout << c;

    return 0;
}
