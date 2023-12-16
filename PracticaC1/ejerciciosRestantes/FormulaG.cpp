
#include <iostream>
#include <cmath>

int main() {
    float a, b, c, discriminante;

    
    std::cout << "Ingrese los coeficientes de  ax^2 + bx + c = 0 :\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    discriminante = (pow(b,2))-(4*a*c);

    if (discriminante > 0) {
        
        float x;
        float x1; 

        x= (-b + std::sqrt(discriminante)) / (2 * a);
        x1 = (-b - std::sqrt(discriminante)) / (2 * a);

        std::cout << "Las soluciones son: \n";
        std::cout << "x1 = " << x << "\n";
        std::cout << "x2 = " << x1 << "\n";

    } else if (discriminante == 0) {

        float x = -b / (2 * a);

        std::cout << "La solucion es: \n";
        std::cout << "x = " << x << "\n";

    } else {
       
        std::cout<<"no tiene solucion en los reales";
    }

    system("pause");
    return 0;
}