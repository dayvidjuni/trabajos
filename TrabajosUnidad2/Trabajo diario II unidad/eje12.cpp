#include <iostream>

int main() {

    char matriz[20][20] = {};
    char transpuesta[20][20] = {};
    int numero;

    std::cin >> numero;

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            matriz[i][j] =i+j;
            transpuesta[j][i] = matriz[i][j];
        }
    }


    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            std::cout << transpuesta[i][j];
        }
        std::cout<<std::endl;
    }

    system("pause");
    return 0;
}