#include <iostream>

int main() {
    int numero;
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "Par" << std::endl;
    } else {
        std::cout << "Impar" << std::endl;
    }

    system("pause");
    return 0;
}
