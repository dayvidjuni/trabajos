/*-------------------------------------------------------------------
    APELLIDO Y NOMBRE: DAYVID JUNIOR SUAQUITA CCANCCAPA
    Semestre: I                    Unidad: II
---------------------------------------------------------------------
*/
#include <iostream>
#include <sstream>

int main() {
    std::string linea;

    while (std::getline(std::cin, linea)) {
        std::istringstream stream(linea);
        std::string palabra;

        while (stream >> palabra) {
            
            for (int i = palabra.size() - 1; i >= 0; --i) {
                std::cout << palabra[i];
            }

            std::cout << ' ';  
        }

        std::cout << std::endl;
    }
    system("pause");
    return 0;
}