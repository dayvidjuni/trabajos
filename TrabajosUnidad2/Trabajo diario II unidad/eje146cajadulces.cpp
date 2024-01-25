/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    bool checar2 = false;
    int cantidad = 0, suma = 0, n, m;

    std::cin >> n;

    int ccaja[n];

    std::cin >> m;

    for (int i = 0; i < n; i++) {
        std::cin >> ccaja[i];
    }

    for (int i = 0; i < n; i++) {
        if (suma > cantidad) {
            cantidad = suma;
        }
        suma = 0;
        for (int j = 0; j < m; j++) {
            if (i + m > n) {
                checar2 = true;
                break;
            } else {
                suma += ccaja[j + i];
            }
        }
        if (checar2) {
            break;
        }
    }

    std::cout << cantidad << std::endl;

    system("pause");
    return 0;
}