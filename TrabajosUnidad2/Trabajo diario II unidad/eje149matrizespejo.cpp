/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int rows, columns, i, k;
    std::cin >> rows >> columns;
    int matriz[rows][columns];

    for (i = 0; i < rows; i++) {
        for (k = 0; k < columns; k++) {
            std::cin >> matriz[i][k];
        }
    }

    for (i = 0; i < rows; i++) {
        for (k = columns - 1; k >= 0; k--) {
            std::cout << matriz[i][k] << " ";
        }
        std::cout << "\n";
    }

    system("pause");
    return 0;
}