#include <iostream>

int main() {
    int dias;
    std::cin >> dias;

    long segundos = dias * 24 * 60 * 60;

    std::cout << segundos;

    system("pause");
    return 0;
}