/*1222. Menú de pastes
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    long long cantidadN, cantidadM, paquetesPrimarios, paquete, etapa, variable, numero, retraso, numeroPrincipal, resultado, auxiliar;
    
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    
    std::cin >> cantidadN >> cantidadM >> paquetesPrimarios;

    while (paquetesPrimarios--) {
        std::cin >> paquete;

        if (paquete % cantidadN == 0) {
            etapa = (paquete / cantidadN) - 1;
        } else {
            etapa = paquete / cantidadN;
        }

        variable = (cantidadN * cantidadM) - (cantidadM - 1);
        numero = etapa + variable;
        retraso = numero - variable;
        numeroPrincipal = (retraso * cantidadN) + 1;
        resultado = paquete - numeroPrincipal;
        auxiliar = resultado * cantidadM;
        numero -= auxiliar;

        std::cout << numero << " ";
    }

    system("pause");
    return 0;
}
