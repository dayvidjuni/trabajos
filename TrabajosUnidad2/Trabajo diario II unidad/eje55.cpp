#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    
    float A, B, C;
    
    std::cin >> A >> B >> C;

    float discriminante = B * B - 4 * A * C;

    if (A == 0 || discriminante < 0) {
        std::cout << "No es posible calcular las raíces." << std::endl;
    } else {
        float raiz1 = (-B + std::sqrt(discriminante)) / (2 * A);
        float raiz2 = (-B - std::sqrt(discriminante)) / (2 * A);

        std::cout <<std::fixed << std::setprecision(5) << raiz1 << std::endl;
        std::cout <<std::fixed << std::setprecision(5) << raiz2 << std::endl; 
        }
    system("pause");
    return 0;
}
