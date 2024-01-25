/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int jaegers;
    std::cin >> jaegers;

    int kaijus = 1; 
    int year = 2018;

    while (jaegers >= kaijus) {
        kaijus *= 2;
        year++;

        if (jaegers < kaijus) {
            break;
        }
    }

    std::cout << year << std::endl;

    return 0;
}