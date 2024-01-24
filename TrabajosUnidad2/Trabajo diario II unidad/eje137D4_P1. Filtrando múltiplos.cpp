#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N;

    std::vector<int> secuencia(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> secuencia[i];
    }

    std::cin >> K;

    for (int i = 0; i < N; ++i) {
        if (secuencia[i] % K != 0) {
            std::cout << 'X';
        } else {
            std::cout << secuencia[i];
        }

        if (i < N - 1) {
            std::cout << ' ';
        }
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}