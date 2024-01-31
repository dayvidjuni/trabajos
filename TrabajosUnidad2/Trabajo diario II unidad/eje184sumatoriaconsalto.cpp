/*9412. Sumatoria con Salto 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    unsigned long n, m, i, sum;
    sum = 0;

    std::cin >> n >> m;

    for (i = 1; i <= m;) {
        sum += i;
        i += n;
    }

    std::cout << sum;

    return 0;
}
