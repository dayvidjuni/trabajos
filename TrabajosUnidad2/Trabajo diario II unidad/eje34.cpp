#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> mis_valores(N), sus_valores(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> mis_valores[i];
    }

    for (int i = 0; i < N; ++i) {
        std::cin >> sus_valores[i];
    }

    std::sort(mis_valores.begin(), mis_valores.end(), std::greater<int>());
    std::sort(sus_valores.begin(), sus_valores.end(), std::greater<int>());

    int mi_indice = N - 1, su_indice = N - 1;
    unsigned int suma = 0;

    while (su_indice >= 0 && mi_indice >= 0) {
        if (mis_valores[mi_indice] > sus_valores[su_indice]) {
            suma += mis_valores[mi_indice];
            mi_indice--;
        }
        su_indice--;
    }

    std::cout << suma << '\n';

    system("pause");

    return 0;
}
