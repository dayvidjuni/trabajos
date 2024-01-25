/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>

int main() {
    int n, m, v;

    std::cin >> n;
    std::cin >> m;

    int arr[n] = {0};

    for (int i = 0; i < m; i++) {
        std::cin >> v;
        arr[v] = arr[v] + 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}