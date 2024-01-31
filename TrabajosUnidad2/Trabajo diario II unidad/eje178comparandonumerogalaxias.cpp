/*11435. Comparando número de galaxias
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (a < b ? "True " : "False ");
    std::cout << (c > a ? "True " : "False ");
    std::cout << (a == b ? "True " : "False ");
    std::cout << (a != c ? "True " : "False ");
    std::cout << (c <= b ? "True\n" : "False\n");

    system("pause");
    return 0;
}
