/*6956. Paseo de la Reforma
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    unsigned int elementos, i, cont = 0, mayor = 0;
    std::cin >> elementos;

    unsigned int vector[elementos], si[elementos];

    for (i = 0; i < elementos; i++) {
        si[i] = 0;
    }

    for (i = 0; i < elementos; i++) {
        std::cin >> vector[i];
    }

    for (i = 0; i < elementos - 1; i++) {
        if (vector[i] > vector[i + 1]) {
            si[cont]++;
        } else {
            cont++;
        }
    }

    for (i = 0; i <= cont; i++) {
        if (si[i] > 0) {
            si[i] += 1;
            if (si[i] > mayor) {
                mayor = si[i];
            }
        }
    }

    std::cout << mayor;

    system("pause");
    return 0;
}
