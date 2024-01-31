/*2534. ULAM 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int limit, aux = 0;

    std::cin >> limit;

    while (limit != 1) {
        std::cout << limit << " ";

        if (limit % 2 == 0) {
            limit /= 2;
        } else {
            limit = (limit * 3) + 1;
        }
    }

    std::cout << "1";

    system("pause");
    return 0;
}
