#include <iostream>

int main() {
    int difEx1, difEx2;

    std::cin >> difEx1 >> difEx2;

    int diferenciaNiveles = std::abs(difEx1 - difEx2);

    int examenSubirNivel = (difEx1 > difEx2) ? 2 : 1;

    std::cout << examenSubirNivel << " " << diferenciaNiveles << std::endl;

    system("pause");
    return 0;
}