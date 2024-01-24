#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); 

    for (int i = 0; i < N; ++i) {
        std::string cadena;
        std::getline(std::cin, cadena);

        std::cout << "\"" << cadena << "\" tiene " << cadena.size() << " caracteres" << std::endl;
    }

    system("pause");
    return 0;
}