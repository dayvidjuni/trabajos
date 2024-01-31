/*2986. Reparte
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int x, ni, bol, resu = 0;

    std::cin >> ni;

    do {
        std::cin >> bol;
    } while (bol < 0 || bol > 11);

    if (ni > 0 && bol > 0) {
        for (int i = 0; i < bol; i++) {
            std::cin >> x;
            resu += x;
        }

        std::cout << resu / ni << ' ' << resu % ni;
    }

    system("pause");
    return 0;
}
