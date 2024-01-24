#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int opcion;

    do {
        /*
        std::cout << "Menu:\n"
                  << "1.- SUMA\n"
                  << "2.- RESTA\n"
                  << "3.- MULTIPLICACION\n"
                  << "4.- DIVISION\n"
                  << "5.- FACTORIAL\n"
                  << "6.- POTENCIA\n"
                  << "7.- SALIR\n"
                  << "Ingrese la opcion (1-7): ";*/
        std::cin >> opcion;

        switch (opcion) {
            case 1: {

                int a, b;
                std::cin >> a >> b;
                std::cout<< a + b << std::endl;
                break;
            }
            case 2: {
                
                int a, b;
                std::cin >> a >> b;
                std::cout<< a - b << std::endl;
                break;
            }
            case 3: {

                int a, b;
                std::cin >> a >> b;
                std::cout << a * b << std::endl;
                break;
            }
            case 4: {

                int a, b;
                std::cin >> a >> b;
                if (b != 0) {
                    std::cout << a / b << std::endl;
                } else {
                    std::cout << "Error: No se puede dividir por cero." << std::endl;
                }
                break;
            }
            case 5: {
            
                int a;
                std::cin >> a;
                std::cout << factorial(a) << std::endl;
                break;
            }
            case 6: {
                
                int a, b;
                std::cin >> a >> b;
                std::cout << std::pow(a, b) << std::endl;
                break;
            }
            case 7:
                
                std::cout << "Saliendo" << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, ingrese una opcion del 1 al 7." << std::endl;
        }

    } while (opcion != 7);

    system("pause");
    return 0;
}