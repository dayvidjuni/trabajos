/*154. Botas
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::map<int, int> contadorBotas;

    for (int i = 0; i < n; ++i) {
        int identificador;
        std::cin >> identificador;

        contadorBotas[identificador]++;
    }

    int botasSinPar = 0;

    for (const auto& par : contadorBotas) {
        botasSinPar += par.second % 2;
    }

    std::cout << botasSinPar << std::endl;
    system("pause");
    return 0;
}
