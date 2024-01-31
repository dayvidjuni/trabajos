/*2993. Alex, la barba, y las pizzas 
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int N, X;
    std::cin >> N >> X;

    int totalGastado = 0;

    for (int i = 0; i < N; ++i) {
        int K;
        std::cin >> K;
        totalGastado += K * X;
    }

    std::cout << totalGastado << std::endl;
    system("pause");
    return 0;
}
