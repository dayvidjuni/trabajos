/*4452. Rango del arreglo
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int vect[10], menor, mayor = 0;

    for (int i = 0; i < 10; i++) {
        std::cin >> vect[i];
    }

    menor = vect[0];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (menor > vect[j]) {
                menor = vect[j];
            }
        }

        if (mayor < vect[i]) {
            mayor = vect[i];
        }
    }

    std::cout << menor << ' ' << mayor << ' ' << mayor - menor;
    system("pause");
    return 0;
}
