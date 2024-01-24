#include <iostream>

int contarLetraA(const std::string& palabra, char letra) {
    int frecuencia = 0;

    for (char caracter : palabra) {
        if (caracter == letra) {
            frecuencia++;
        }
    }

    return frecuencia;
}

int main() {
    std::string palabra;
    char letra;

    std::cin >> palabra >> letra;

    int frecuenciaA = contarLetraA(palabra, letra);

    std::cout << frecuenciaA << std::endl;

    system("pause");
    return 0;
}