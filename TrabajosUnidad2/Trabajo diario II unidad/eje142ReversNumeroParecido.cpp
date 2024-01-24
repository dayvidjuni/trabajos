#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> secuencia;
    for (int i = 0; i < N; ++i) {
        int numero;
        std::cin >> numero;
        secuencia.push_back(numero);
    }


    for (int i = N - 1; i >= 0; --i) {
        std::cout << secuencia[i] ;
    }

    return 0;
}