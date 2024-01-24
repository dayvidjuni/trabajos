#include <iostream>

int main() {
    int numero;
    std::cin >> numero;

    int sumatoria = 0;
    for (int i = 2; i <= numero; i += 2) { 
        if (i % 2 == 0) { 
            sumatoria += i;
        }
    }

    std::cout << sumatoria << std::endl;
    system("pause");
    return 0;
}
