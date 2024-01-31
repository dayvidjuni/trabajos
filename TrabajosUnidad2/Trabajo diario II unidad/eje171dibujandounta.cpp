/* 11452. Dibujando un tache
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <bits/stdc++.h>

void espacios(int n) {
    for (int i = 0; i < n; i++)
        std::cout << " ";
}

int main() {

    int n, m, inicio = 0;
    std::cin >> n;

    m = n - 2;
    for (int i = 0; i < (n / 2); i++) {
        espacios(inicio);
        std::cout << "@";
        espacios(m);
        std::cout << "@\n";
        inicio++, m -= 2;
    }

    espacios(inicio--);
    std::cout << "@\n";
    m += 2;

    for (int i = 0; i < (n / 2); i++) {
        espacios(inicio);
        std::cout << "@";
        espacios(m);
        std::cout << "@\n";
        inicio--, m += 2;
    }

    return 0;
}
