/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int i, n;
    float suma = 0, prom, cal;

    std::cin >> prom >> n;

    for (i = 0; i < n; ++i) {
        std::cin >> cal;
        suma += cal;
    }

    suma /= n;

    if (suma > prom) {
        std::cout << "Presume";
    } else {
        std::cout << "Ladra";
    }

    system("pause");
    return 0;
}