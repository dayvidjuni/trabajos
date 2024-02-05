/*19273. Numeros primos
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

bool esPrimo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    std::cin >> n;

    if (n <= 0) {
        std::cout<< std::endl;
        return 1; 
    }

    std::cout << n << ",[";

    int i = 2; 

    while (n > 0) {
        if (esPrimo(i)) {
            std::cout << i;
            if (n > 1) {
                std::cout << ", ";
            }
            --n;
        }
        ++i;
    }

    std::cout << "]" << std::endl;
    system("pause");
    return 0;
}
