/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    long long focos, i;
    std::cin >> focos;

    for (i = 1; i <= focos; i++) {
        if (i * i > focos) {
            break;
        } else {
            std::cout << i * i << std::endl;
        }
    }

    return 0;
}