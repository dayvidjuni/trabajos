#include <iostream>

int main() {
    int entero;
    std::cin >> entero;

    for (int n = 0; n <= 10; ++n) {
        std::cout << entero * n << ' ';
    }
    
    system("pause");
    return 0;
}
