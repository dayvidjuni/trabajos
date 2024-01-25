/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int tamano;
    std::cin >> tamano;

    int* arreglo = new int[tamano];

    for (int i = 0; i < tamano; ++i) {
        std::cin >> arreglo[i];
    }

    int N;
    std::cin >> N;

    std::sort(arreglo, arreglo + tamano);

    for (int i = 0; i < tamano; ++i) {
        if (arreglo[i] > N) {
            std::cout << arreglo[i];
            break;
        }
    }

    delete[] arreglo; 

    system("pause");
    return 0;

}