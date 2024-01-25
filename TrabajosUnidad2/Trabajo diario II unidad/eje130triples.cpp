/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> lista(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> lista[i];
    }

    std::vector<int> triplesIndices;
    for (int i = 0; i < N; ++i) {
        if (lista[i] % 3 == 0) {
            triplesIndices.push_back(i + 1);
        }
    }

    if (!triplesIndices.empty()) {
        std::cout << triplesIndices.size() << std::endl;
        for (int index : triplesIndices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No hay triples." << std::endl;
    }

    system("pause");
    return 0;
}
