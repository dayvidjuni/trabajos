#include <iostream>

int main() {
    int numero;
    std::cin >> numero;

    for (int i = 1; i <= numero; i++) {
        for (int k = 0; k <i; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;  
    }

    system("pause");
    return 0;
}