#include <iostream>
#include <string>

int main() {

    std::string palabra;
    std::cin >> palabra;

    for (std::size_t i = 0; i < palabra.length(); ++i) {
        std::cout << palabra[i] << std::endl;
    }

    system("pause");
    return 0;
}