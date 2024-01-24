#include <iostream>

int main() {
    int K;
    std::cin >> K;

    int cartasSanty = 0;
    int cartasAmigo = 0;

    for (int i = 1; i <= K; i++) {
        if (i % 5 == 0) {
            cartasSanty++;
        }
        if (i % 7 == 0) {
            cartasAmigo++;
        }
    }

    int cartasTotales = cartasSanty + cartasAmigo;

    std::cout << cartasTotales << std::endl;
    system("pause");
    return 0;
}