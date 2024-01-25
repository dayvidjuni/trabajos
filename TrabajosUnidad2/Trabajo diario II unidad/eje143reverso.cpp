/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int limit, i;
    std::cin >> limit;

    int vec[limit];
    
    for (i = 0; i < limit; i++) {
        std::cin >> vec[i];
    }

    for (i = limit - 1; i >= 0; i--) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
