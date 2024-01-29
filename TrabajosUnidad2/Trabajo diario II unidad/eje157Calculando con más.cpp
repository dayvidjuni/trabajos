/*7065. Calculando con más/menos
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main(){
    float a, b, c;

    std::cin >> a >> b >> c;

    if (b == 0) {
        std::cout << "indefinido";
    } else {
        float result1 = a / b + c;
        float result2 = a / b - c;

        if (c > 0) {
            std::cout << result1 << ' ' << result2;
        } else {
            std::cout << result1;
        }
    }

    system("pause");
    return 0;
}