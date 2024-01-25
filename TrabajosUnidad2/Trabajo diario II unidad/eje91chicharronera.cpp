/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    float discriminante = b * b - 4 * a * c;

    
    float raizPositiva = (-b + std::sqrt(discriminante)) / (2 * a);
    float raizNegativa = (-b - std::sqrt(discriminante)) / (2 * a);

    std::cout << raizPositiva << " " << raizNegativa << std::endl;


	system("pause");
    return 0;
}
