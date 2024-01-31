/*6085. Sequia
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int posAux, sIter, varN, numC, old, i;

int main() {
    std::cin >> posAux >> sIter;
    int vec[posAux];

    for (i = 0; i < posAux; i++) {
        std::cin >> vec[i];
    }

    for (i = 0; i < posAux; i++) {
        numC = old + vec[i];
        old = numC;

        if (numC <= sIter) {
            varN++;
        }

        if (numC > sIter) {
            int aux;
            aux = numC - vec[i];

            if (aux < sIter) {
                varN++;
            }
        }
    }

    std::cout << varN;

    system("pause");
    return 0;
}
