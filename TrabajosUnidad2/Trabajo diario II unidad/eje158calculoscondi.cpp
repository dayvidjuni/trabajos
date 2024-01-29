/*7050. Cálculos condicionales
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int num, count = 0;

    std::cin >> num;

    if (num % 2 == 0) {
        num /= 2;
        count++;
    } else {
        num += 1;
        count++;
    }

    if (num > 99) {
        num /= 100;
        count++;
    } else if (num > 9 && num < 100) {
        num /= 10;
        count++;
    }

    if (num % 3 == 0) {
        num--;
        count++;
    }

    std::cout << num << ' ' << count;

    return 0;
}