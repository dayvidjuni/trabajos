/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

int main() {
    int r0;
    float r1 = 0;

    for (int n = 0; n < 5; n++) {
        std::cin >> r0;
        r1 += r0;
    }

    std::cout << std::fixed << std::setprecision(2) << r1 / 5;

    system("pause");
    return 0;
}