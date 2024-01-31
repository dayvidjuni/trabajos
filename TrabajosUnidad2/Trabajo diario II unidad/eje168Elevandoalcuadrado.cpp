/* 7912. Elevando al cuadrado
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int num, count = 0;
    std::cin >> num;

    while (num < 30000) {
        count += 1;
        num *= num;
    }

    std::cout << num << ' ' << count;

    return 0;
}