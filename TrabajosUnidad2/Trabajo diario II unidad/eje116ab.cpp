#include <iostream>

int main() {
    int A, B;

    std::cin >> A >> B;

    std::cout << A + B << std::endl;
    std::cout <<A - B << std::endl;
    std::cout <<A * B << std::endl;

    if (B != 0) {
        std::cout << static_cast<double>(A) / B << std::endl;
        std::cout << A % B << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }
    system("pause");
    
    return 0;
}