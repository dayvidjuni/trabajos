#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "0";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}