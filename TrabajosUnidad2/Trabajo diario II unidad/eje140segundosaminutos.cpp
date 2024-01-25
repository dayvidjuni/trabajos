/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

int main() {
    double segundos;
    std::cin >> segundos;

    int minutos = static_cast<int>(segundos / 60);
    segundos -= minutos * 60;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << minutos <<" "<<segundos;

    system("pause");
    return 0;
}