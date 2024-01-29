/*6270. Conversión de temperaturas
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int tempCelsius;

    std::cin >> tempCelsius;

    std::cout << tempCelsius + 273 << ' ';
    std::cout << tempCelsius * 9 / 5 + 32 << ' ';
    std::cout << tempCelsius * 0.8;

    system("pause");
    return 0;
}