#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    
    int a, b;
    char operador;
    std::cin >> a;

    std::cin >> operador;

    std::cin >> b;

    double resultado;

    switch (operador) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case 'x':
            resultado = a * b;
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
            } else {
                std::cout << "No se puede dividir por cero." << std::endl;
                return 1; 
            }
            break;
        case 'R':
            if (a >= 0) {
                resultado = std::pow(a, 1.0 / b);
            } else {
                std::cout<< "No se puede calcular la raiz de un numero negativo." << std::endl;
                return 1; 
            }
            break;
        case 'P':
            resultado = std::pow(a, b);
            break;
        default:
            std::cout << "no hace nada jajajja" << std::endl;
            return 1;  
    }

    std::cout << std::fixed << std::setprecision(3);
    std::cout << resultado << std::endl;

    system("pause");
    return 0;
}

