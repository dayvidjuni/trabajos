/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

int main() {
    int base, altura;
    
    std::cin >> base >> altura;
    double area = 0.5 * base * altura;
    
    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
    
    system("pause");
    return 0;
}