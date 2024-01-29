/*7107. Cálculos iterativos
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int a, b, c, result = 0;

    std::cin >> a >> b >> c;

    for (int n = 1; n < a + 1; n++) {
        if (n % 2 != 0) {
            result += n;
        }
    }

    std::cin >> result;

    for (int n = 4; n < b + 1; n *= n) {
        result -= n;
    }

    while (result % c == 0) {
        result /= c;
    }

    std::cout << result;
    system("pause");
    return 0;
}
