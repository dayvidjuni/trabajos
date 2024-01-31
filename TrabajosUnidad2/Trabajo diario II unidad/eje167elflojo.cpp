/* 10325. El flojo
-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <string>

int main() {
    std::string palabra;
    

    std::cin >> palabra;

    if (palabra.length() > 4) {
        std::string acortada = palabra[0] + std::to_string(palabra.length() - 2) + palabra.back();

        std::cout << acortada << std::endl;
    }

    system("pause");
    return 0;
}
