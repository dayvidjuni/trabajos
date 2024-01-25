/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int a = n / m;
    int b = n % m;

    if (b != 0) {
        std::cout << a << " " << b << "/" << m << std::endl;
    } else {
        std::cout << a << std::endl;
    }

    system("pause");
    return 0;
}
