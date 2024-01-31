/* 7461. ¡Demasiadas películas! 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int a, b, c, d = 0;
    std::cin >> a >> b;

    for (int i = 0; i < b; i++) {
        std::cin >> c;
        d += c;
    }

    if (b > d) {
        std::cout << "SI";
    } else {
        std::cout << "NO";
    }

    return 0;
}
