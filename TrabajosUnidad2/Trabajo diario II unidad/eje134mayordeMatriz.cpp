#include <iostream>

int main() {
    int fila, columna, mayor = 0;

    std::cin >> fila >> columna;

    int matriz[fila][columna];

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            std::cin >> matriz[i][j];

            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }

    std::cout << mayor << std::endl;

    system("pause");
    return 0;
}
