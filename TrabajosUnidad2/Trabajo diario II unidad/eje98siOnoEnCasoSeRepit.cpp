/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int num1, num2, num3;
  
    std::cin >> num1;

    std::cin >> num2;

    std::cin >> num3;
  
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        std::cout << "Si";
    } else {
        std::cout << "No";
    }

    system("pause");
    return 0;
}