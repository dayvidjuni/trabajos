/*7779. Mayor de una matriz
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int filas, columnas, valorMayor = 0;

    std::cin >> filas >> columnas;
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cin >> matriz[i][j];
            if (matriz[i][j] > valorMayor) {
                valorMayor = matriz[i][j];
            }
        }
    }

    std::cout << valorMayor;

    system("pause");
    return 0;
}
