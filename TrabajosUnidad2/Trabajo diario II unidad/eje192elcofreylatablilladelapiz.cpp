/*1888. El cofre y la tablilla de lapizlázuli
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

int main() {
    int arr1[3], arr2[3];

    for (int i = 0; i < 3; i++) {
        std::cin >> arr1[i];
    }
    std::sort(arr1, arr1 + 3);

    for (int i = 0; i < 3; i++) {
        std::cin >> arr2[i];
    }
    std::sort(arr2, arr2 + 3);

    for (int i = 0; i < 3; i++) {
        if (arr1[i] <= arr2[i]) {
            if (i == 2) {
                std::cout << "1";
            }
        } else {
            std::cout << "0";
            goto salto;
        }
    }

salto:
    system("pause");
    return 0;
}
