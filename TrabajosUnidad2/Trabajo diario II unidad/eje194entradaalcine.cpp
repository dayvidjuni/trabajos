/*13370. Entrada al cine
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int A; 
    std::cin >> A;

    int ingresaron = 0; 

    for (int i = 0; i < A; ++i) {
        int edad;
        std::cin >> edad;

        if (edad >= 15) {
            ingresaron++;
        }
    }

    std::cout <<ingresaron << std::endl;

    system("pause");
    return 0;
}
