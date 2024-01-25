/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int N;
    std::cin >> N;
    if (N < 0) {
        N = -N;
    }
    int suma = 0;
    for (int i = 1; i <=N; ++i) {
        suma += i;
    }

    std::cout << suma;
    system("pause");
    return 0;
}