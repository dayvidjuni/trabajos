#include <iostream>
#include <iomanip>

int main() {
    int alumnos, suma = 0;

    std::cin >> alumnos;


    int notas[100];

    for (int i = 0; i < alumnos; i++) {
        
        std::cin >> notas[i];
        suma += notas[i];
    }

    float promedio = static_cast<float>(suma) / alumnos;

    std::cout << std::fixed << std::setprecision(2) << promedio;

    system("pause");

    return 0;
}
