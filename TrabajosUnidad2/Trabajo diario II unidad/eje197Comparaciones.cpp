/*4318. Comparaciones
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>

void comparaciones(std::vector<int> numeros) {

    std::sort(numeros.begin(), numeros.end());

    if (numeros[0] == numeros[4]) {
        std::cout << "Identicamente iguales";
    } 
    else if (numeros[0] == numeros[3] || numeros[1] == numeros[4]) {
        std::cout << "Muy iguales";
    } 
    else if (numeros[0] == numeros[2] || numeros[1] == numeros[3] || numeros[2] == numeros[4]) {
        std::cout << "Iguales";
    } 
    else if (numeros[0] == numeros[1] || numeros[1] == numeros[2] || numeros[2] == numeros[3] || numeros[3] == numeros[4]) {
        std::cout << "Diferentes";
    } 
    else {
        std::cout << "Muy diferentes";
    }
}

int main() {

    std::vector<int> numeros;

    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        numeros.push_back(num);
    }

    comparaciones(numeros);
    system("pause");
    return 0;
}
