#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;

    int contadorTotal = 0;

    for (int i = 0; i < N; i++) {
        int numero;
        std::cin >> numero;

        while (numero > 0) {
            if (numero % 10 == K) {
                contadorTotal++;
            }
            numero /= 10;
        }
    }

    std::cout << contadorTotal;

    system("pause");
    return 0;
}
