#include <iostream>
#include <string>

int main() {
    std::string numeroBinario;
    std::cin >> numeroBinario;

    int decimal = std::stoi(numeroBinario, nullptr, 2);

    std::cout << numeroBinario << " = " << decimal << std::endl;

    system("pause");
    return 0;
}
