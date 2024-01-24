#include <iostream>

int main() {
    int filas;
    std::cin >> filas;

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}
